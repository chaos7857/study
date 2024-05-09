package com.xinGuan.client;

import javax.swing.*;
import javax.swing.border.LineBorder;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.*;
import java.net.Socket;
import java.net.URL;
import java.net.URLConnection;
import java.net.URLEncoder;
import java.nio.charset.StandardCharsets;

public class ReadyFrame extends JFrame implements ActionListener ,Runnable{
    Socket socket;


    JButton ready;
    JButton send;
    JButton ready2;
    Thread thread;

    public ReadyFrame() throws IOException {
        initConnection();
        initFrame();
        initView();

        thread = new Thread(this);
        thread.start();
    }

    private void initConnection() throws IOException {
        socket = new Socket(StaticValue.IP, 10086);


    }


    private void initView() {
        Box box=new Box(BoxLayout.X_AXIS);
        Box box1=new Box(BoxLayout.Y_AXIS);
        box1.setBounds(10,10,400,400);
        box1.setBorder(new LineBorder(Color.BLUE));
        //1号玩家
        box1.add(new JLabel("玩家1"));
        //1号玩家添加图片
        JLabel label1=new JLabel();
        ImageIcon icon1=new ImageIcon(StaticValue.path+"player1.png");
        label1.setIcon(icon1);
        label1.setBounds(0,0,icon1.getIconWidth(),icon1.getIconHeight());
        box1.add(label1);
        //1号玩家准备按钮
        ready = new JButton("ready");
        //ready.setBounds(0,0,80,40);
        ready.addActionListener(this);
        box1.add(ready);
        //2号玩家
        box1.add(new JLabel("玩家2"));
        JLabel label2=new JLabel();
        ImageIcon icon2=new ImageIcon(StaticValue.path+"player2.png");
        label2.setIcon(icon2);
        label2.setBounds(0,0,icon1.getIconWidth(),icon1.getIconHeight());
        box1.add(label2);
        ready2 = new JButton("loading");
        box1.add(ready2);



        Box box2=new Box(BoxLayout.Y_AXIS);
        box2.setSize(400,400);
        //文字显示区域
        JTextArea txt1=new JTextArea();

        txt1.setFont(new Font("楷体",Font.BOLD,20 ));
        txt1.setColumns(20);
        ScrollPane pane=new ScrollPane();

        //JLabel txt1=new JLabel();
        txt1.setEditable(false);
        pane.add(txt1);
        //聊天框

        TextField txt=new TextField();
        txt.setColumns(10);
        txt.setFont(new Font("楷体",Font.BOLD,30));
        JButton button=new JButton("send");
        button.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                txt1.append("玩家："+txt.getText()+"\r\n");
                try {
                    String ans = get(txt.getText());
                    txt1.append("回答："+ans+"\r\n");
                } catch (IOException ex) {
                    throw new RuntimeException(ex);
                }


                txt.setText("");//清空文本框
                txt.requestFocus();//获取焦点（光标）
                txt1.setLineWrap(true);
            }
        });


        Component v1=Box.createVerticalStrut(100);
        Component v2=Box.createVerticalStrut(200);
        Component v3=Box.createVerticalStrut(100);
        box2.add(v1);
        box2.add(new JLabel("和我聊一会天吧"));
        box2.add(pane);
        box2.add(v2);
        box2.add(txt);
        box2.add(button);
        box2.add(v3);

        Component c1=Box.createHorizontalStrut(50);
        Component c2=Box.createHorizontalStrut(100);
        Component c3=Box.createHorizontalStrut(50);

        box.add(c1);
        box.add(box1);
        box.add(c2);
        box.add(box2);
        box.add(c3);
//        .pack();
//        this.setVisible(true);
        //this.add(box);
        this.setContentPane(box);
    }


    private void initFrame() {
        //设置窗口的大小为800 * 600
        this.setSize(800,600);
        //设置窗口居中显示
        this.setLocationRelativeTo(null);
        //设置窗口的可见性
        this.setVisible(true);
        this.setIconImage(Toolkit.getDefaultToolkit().getImage(StaticValue.path+"s_mario_jump1_R.png"));
        //设置点击窗口上的关闭键,结束程序
        this.setDefaultCloseOperation(EXIT_ON_CLOSE);
        //设置窗口大小不可变
        this.setResizable(false);
        this.setLayout(null);
        //设置窗口名称
        this.setTitle("超级玛丽");

    }

    @Override
    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == ready){
            StaticValue.isReady += 1;
            try {
                BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(socket.getOutputStream()));
                bw.write("isReady");
                bw.newLine();
                bw.flush();
//                bw.close();

            } catch (IOException ex) {
                throw new RuntimeException(ex);
            }
            if (StaticValue.isReady >=2){
                this.setVisible(false);
                try {
                    StaticValue.gameFrame = new GameFrame(socket);
                } catch (IOException ex) {
                    throw new RuntimeException(ex);
                }
                thread.stop();
            }
        }
    }

    @Override
    public void run() {

        while (true){
            try {
                BufferedReader br = new BufferedReader(new InputStreamReader(socket.getInputStream()));
                String message = br.readLine();
                System.out.println(message);
                if ("isReady".equals(message)){
                    StaticValue.isReady +=1;
                    if (StaticValue.isReady >=2){
                        this.setVisible(false);
                        StaticValue.gameFrame = new GameFrame(socket);
                        thread.stop();
                    }

                }
                if ("full".equals(message)){
                    JOptionPane.showMessageDialog(this,"full");
//                    System.exit(0);
                    this.setVisible(false);
                    new EnterFrame();
                }
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        }
    }
    public String get(String str) throws IOException {
        URL url;
        str = URLEncoder.encode(str, String.valueOf(StandardCharsets.UTF_8));
        url = new URL("http://api.qingyunke.com/api.php?key=free&appid=0&msg="+str);
        URLConnection conn = url.openConnection();
        BufferedReader br = new BufferedReader(new InputStreamReader(conn.getInputStream()));
        String line;
        StringBuilder answer = new StringBuilder();
        while ((line = br.readLine()) != null) {
            System.out.println(line);
            answer.append(line.split("\"")[5]);
        }
        br.close();
        return answer.toString();




    }
}
