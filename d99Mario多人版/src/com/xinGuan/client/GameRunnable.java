package com.xinGuan.client;

import javax.swing.*;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.net.Socket;
import java.util.List;

public class GameRunnable implements Runnable{
    private Mario mario2;
    private Mario mario;
    /*主要用来监听回写，更新玛丽奥2*/
    private BackGround nowBg;
    private List<BackGround> allBg;
    private Socket socket;
    public GameRunnable (Socket socket,Mario mario, Mario mario2, BackGround nowBg, List<BackGround> allBg) {
        this.socket = socket;
        this.mario = mario;
        this.mario2 = mario2;
        this.nowBg = nowBg;
        this.allBg = allBg;
    }

    @Override
    public void run() {
//        System.out.println(mario2.status);
        try {
            BufferedReader br = new BufferedReader(new InputStreamReader(socket.getInputStream()));
            while (true) {
//                int act = Integer.parseInt(br.readLine());
                String act = br.readLine();
                System.out.println(act);
                //向右移动
                if ("D".equals(act)) {
                    mario2.rightMove();
                }
                //向左移动
                if ("A".equals(act)) {
                    mario2.leftMove();
                }
                //跳跃
                if ("W".equals(act)) {
                    mario2.jump();
                }
//                //        2
                //想左停止
                if ("a".equals(act)) {
                    mario2.leftStop();
                }
                //向右停止
                if ("d".equals(act)) {
                    mario2.rightStop();
                }
                if ("isDeath".equals(act)){
                    mario.death();
                    mario2.death();
                }

                if ("pass".equals(act)){
//                    System.out.println(nowBg.getSort());
//                    nowBg = allBg.get(nowBg.getSort());
//                    mario.setBackGround(nowBg);
//                    mario.setX(10);
//                    mario.setY(355);
//                    mario2.setBackGround(nowBg);
//                    mario2.setX(10);
//                    mario2.setY(355);
//                    StaticValue.gameFrame.repaint();
                }

                if ("isOk".equals(act)){
                    JOptionPane.showMessageDialog(StaticValue.gameFrame,"恭喜你!成功通关了");
                }
            }
        } catch (IOException e) {
            throw new RuntimeException(e);
        }
    }
}
