package com.xinGuan.server;

import java.io.*;
import java.net.Socket;

public class ServerRunnable implements Runnable{
    private final Socket socket;
    private ServerFrame serverFrame;

    public ServerRunnable(Socket socket, ServerFrame serverFrame) {
        this.serverFrame = serverFrame;
        this.socket = socket;
    }
    @Override
    public void run() {
        try {
            BufferedReader br = new BufferedReader(new InputStreamReader(socket.getInputStream()));

            while (true) {
                String message = br.readLine();
                System.out.println(message);
                serverFrame.addEvent(message);
                for (Socket socket1 : ServerStaticValue.userList) {
                    if (socket1 == socket)continue;
                    BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(socket1.getOutputStream()));
                    bw.write(message);
                    bw.newLine();
                    bw.flush();
                }
            }


        } catch (IOException e) {
            throw new RuntimeException(e);
        }
    }
}
