package com.xinGuan.server;

import java.io.BufferedWriter;
import java.io.IOException;
import java.io.OutputStreamWriter;
import java.net.ServerSocket;
import java.net.Socket;

public class Server {

    public static void main(String[] args) throws IOException {
        ServerFrame serverFrame = new ServerFrame();

        ServerSocket ss = new ServerSocket(10086);

        while (true){
            Socket socket = ss.accept();
            BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(socket.getOutputStream()));

            if (ServerStaticValue.userList.size()<2){
                bw.write("welcome");
                bw.newLine();
                bw.flush();

                serverFrame.addEvent("welcome");
                serverFrame.show(ServerStaticValue.userList.size());

                ServerStaticValue.userList.add(socket);

            }else {
                bw.write("full");
                bw.newLine();
                bw.flush();
            }

            /*对链接成功的用户表示欢迎*/
//            System.out.println("Welcome!!");

//            开线程处理将接收到的信息发送给全部客户端
            ServerRunnable sr = new ServerRunnable(socket, serverFrame);
            Thread thread = new Thread(sr);
            thread.start();
        }
    }
}
