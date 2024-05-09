package com.xinGuan.client;



import javax.swing.*;
import java.awt.*;
import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;
import java.io.BufferedWriter;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.OutputStreamWriter;
import java.net.Socket;
import java.util.ArrayList;
import java.util.List;

public class GameFrame extends JFrame implements KeyListener,Runnable {

    private Socket socket;
    private BufferedWriter bw;
    List<BackGround> allBg = new ArrayList<>();
    //用于存储当前的背景
    BackGround nowBg = new BackGround();
    //用于双缓存
    private Image offScreenImage = null;
    //马里奥对象
    private Mario mario = new Mario();
    private Mario mario2 = new Mario();
    //定义一个线程对象,用于实现马里奥的运动
    /*他是以类调用的，咱可以尝试改成接口的形式*/
    private Thread thread = new Thread(this);

    GameRunnable gameRunnable;
    Thread thread2;
    public GameFrame(Socket socket) throws IOException {
        this.socket = socket;
        bw = new BufferedWriter(new OutputStreamWriter(socket.getOutputStream()));

        setIconImage(Toolkit.getDefaultToolkit().getImage(StaticValue.path+"1.jpg"));

        initFrame();
        //初始化图片
        /*就是把所有图片添加到对应的集合中*/
        StaticValue.init();
        //初始化马里奥
        mario = new Mario(10,355);
        mario2 = new Mario(10,355);
        //创建全部的场景
        for (int i = 1;i <= 3;i++) {
            allBg.add(new BackGround(i, i == 3 ? true : false));
        }
        //将第一个场景设置为当前场景
        nowBg = allBg.get(0);
        mario.setBackGround(nowBg);
        mario2.setBackGround(nowBg);
        //绘制图像
        repaint();
        /*开启自身线程,处理条件判断*/
        thread.start();

        gameRunnable = new GameRunnable(socket,mario, mario2, nowBg,allBg);
        thread2 = new Thread(gameRunnable);
        /*监听回写的线程*/
        thread2.start();

    }


    private void initFrame() {
        //设置窗口的大小为800 * 600
        this.setSize(800,600);
        //设置窗口居中显示
        this.setLocationRelativeTo(null);

        this.setLayout(null);
        //设置窗口的可见性
        this.setVisible(true);
        //设置点击窗口上的关闭键,结束程序
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        //设置窗口大小不可变
        this.setResizable(false);
        //向窗口对象添加键盘监听器
        this.addKeyListener(this);
        //设置窗口名称
        this.setTitle("超级玛丽");

        initMenuBar();

    }

    private void initMenuBar() {
        //  TODO
        JMenu jMenu = new JMenu("menu");
        JMenuItem jMenuItem = new JMenuItem("restart");
        jMenu.add(jMenuItem);

        JMenuBar menuBar = new JMenuBar();
        menuBar.add(jMenu);

        // 添加菜单项到菜单栏...
        this.setJMenuBar(menuBar);
    }



    @Override
    public void paint(Graphics g) {
        if (offScreenImage == null) {
            offScreenImage = createImage(800,600);
        }

        Graphics graphics = offScreenImage.getGraphics();
        graphics.fillRect(0,0,800,600);

        //绘制背景
        graphics.drawImage(nowBg.getBgImage(),0,0,this);

        //绘制敌人
        for (Enemy e : nowBg.getEnemyList()) {
            graphics.drawImage(e.getShow(),e.getX(),e.getY(),this);
        }

        //绘制障碍物
        for (Obstacle ob : nowBg.getObstacleList()) {
            graphics.drawImage(ob.getShow(),ob.getX(),ob.getY(),this);
        }

        //绘制城堡
        graphics.drawImage(nowBg.getTower(),620,270,this);

        //绘制旗杆
        graphics.drawImage(nowBg.getGan(),500,220,this);

        //绘制马里奥
        graphics.drawImage(mario.getShow(),mario.getX(),mario.getY(),this);
        graphics.drawImage(mario2.getShow(),mario2.getX(),mario2.getY(),this);

        //添加分数
        Color c = graphics.getColor();
        graphics.setColor(Color.BLACK);
        graphics.setFont(new Font("黑体",Font.BOLD,25));
        int score = mario.getScore()+mario2.getScore();
        graphics.drawString("当前的分数为: " + score,300,100);
        graphics.setColor(c);

        //将图像绘制到窗口中
        g.drawImage(offScreenImage,0,0,this);
    }



    @Override
    public void keyTyped(KeyEvent e) {

    }
    //当键盘按下按键时调用
    @Override
    public void keyPressed(KeyEvent e) {
        System.out.println(e.getKeyCode());
        try {
            bw.write(e.getKeyCode());
            bw.newLine();
            bw.flush();
        } catch (IOException ex) {
            throw new RuntimeException(ex);
        }

        //向右移动
        if (e.getKeyCode() == 68) {
            mario.rightMove();
        }
        //向左移动
        if (e.getKeyCode() == 65) {
            mario.leftMove();
        }
        //跳跃
        if (e.getKeyCode() == 87) {
            mario.jump();
        }
        //向右移动
        if (e.getKeyCode() == 39) {
            mario2.rightMove();
        }
        //向左移动
        if (e.getKeyCode() == 37) {
            mario2.leftMove();
        }
        //跳跃
        if (e.getKeyCode() == 38) {
            mario2.jump();
        }

    }
    //当键盘松开按键时调用
    @Override
    public void keyReleased(KeyEvent e) {
        try {
            bw.write(e.getKeyCode()+32);
            bw.newLine();
            bw.flush();
        } catch (IOException ex) {
            throw new RuntimeException(ex);
        }
        //想左停止
        if (e.getKeyCode() == 65) {
            mario.leftStop();
        }
        //向右停止
        if (e.getKeyCode() == 68) {
            mario.rightStop();
        }
        //想左停止
        if (e.getKeyCode() == 37) {
            mario2.leftStop();
        }
        //向右停止
        if (e.getKeyCode() == 39) {
            mario2.rightStop();
        }

    }

    @Override
    public void run() {
        while (true) {
            repaint();
            try {
                Thread.sleep(50);

                if (mario.getX() >= 775 || mario2.getX() >= 775) {
                    bw.write("pass");
                    bw.newLine();
                    bw.flush();

                    nowBg = allBg.get(nowBg.getSort());
                    mario.setBackGround(nowBg);
                    mario.setX(10);
                    mario.setY(355);
                    mario2.setBackGround(nowBg);
                    mario2.setX(10);
                    mario2.setY(355);

                }

                //判断马里奥是否死亡
                if (mario.isDeath()) {
                    bw.write("isDeath");
                    bw.newLine();
                    bw.flush();
                    JOptionPane.showMessageDialog(this,"马里奥死亡!!!");
                    /*这里不要退出，可以再来一把那种*/
                    System.exit(0);
                }

                //判断游戏是否结束
                if (mario.isOK()) {
                    bw.write("isOk");
                    bw.newLine();
                    bw.flush();
                    JOptionPane.showMessageDialog(this,"恭喜你!成功通关了");

                    System.exit(0);
                }

            } catch (InterruptedException e) {
                e.printStackTrace();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        }
    }
}
