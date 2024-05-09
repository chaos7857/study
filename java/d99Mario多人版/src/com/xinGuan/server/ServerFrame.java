package com.xinGuan.server;


import javax.swing.*;
import javax.swing.border.LineBorder;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.OutputStreamWriter;

public class ServerFrame extends JFrame implements ActionListener {
    JButton button1;
    JButton button2;
    JTextArea txt;

    Label p1;
    Label p2;

    public ServerFrame(){
        initFrame();
        initView();
        //设置窗口的可见性
        this.setVisible(true);
        button1.setVisible(false);
        button2.setVisible(false);
    }

    private void initFrame() {

        this.setSize(500,500);

        this.setLayout(null);

        this.setLocationRelativeTo(null);

        this.setIconImage(Toolkit.getDefaultToolkit().getImage(ServerStaticValue.path+"s_mario_jump1_R.png"));

        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        this.setResizable(false);

        this.setTitle("超级玛丽服务端");
    }


    public void initView() {

        ImageIcon bg = new ImageIcon(ServerStaticValue.path+"bg2.png");
        JLabel lable = new JLabel(bg);
        lable.setSize(bg.getIconWidth(),bg.getIconHeight());
        this.getLayeredPane().add(lable,new Integer(Integer.MIN_VALUE));

        ((JPanel) this.getContentPane()).setOpaque(false);

        // 左侧滚动条
        txt=new JTextArea();
        txt.setLineWrap(true);//开启自动换行
        txt.setEditable(false);

        JScrollPane pane=new JScrollPane(txt);
        pane.setBorder(new LineBorder(Color.CYAN));
        pane.setBounds(10, 10, 250, 330);
//        pane.add(new Label("players'behaviors"));//将标签放入面板中
        pane.setVerticalScrollBarPolicy(JScrollPane.VERTICAL_SCROLLBAR_AS_NEEDED);
        getContentPane().add(pane);//将panel放入jframe界面

        JPanel panel_1 = new JPanel();//第二个JPanel
         panel_1.setBorder(new LineBorder(Color.PINK));
        panel_1.setBounds(300, 10, 150, 128);

        p1 = new Label("player1");
        panel_1.add(p1);//这是第二个面板

        button1=new JButton("skip off");
        button1.setLocation(375,80);
        panel_1.add(button1);

        getContentPane().add(panel_1);//将panel放入jframe界面

        JPanel panel_2=new JPanel();
        panel_2.setBorder(new LineBorder(Color.CYAN));
        panel_2.setBounds(300,200,150,128);

        p2 = new Label("player2");
        panel_2.add(p2);

        button2=new JButton("skip off");
        button2.setLocation(375,280);
        panel_2.add(button2);

        getContentPane().add(panel_2);

        //加按钮监视器
        button1.addActionListener(this);
        button2.addActionListener(this);


    }

    public void addEvent(String event){
        txt.append(event+"\r\n");
        txt.setLineWrap(true);

    }

    @Override
    public void actionPerformed(ActionEvent e) {
        if(e.getSource()==button1){
            try {
                BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(ServerStaticValue.userList.get(0).getOutputStream()));
                bw.write("full");
                bw.newLine();
                bw.flush();
            } catch (IOException ex) {
                throw new RuntimeException(ex);
            }

            ServerStaticValue.userList.remove(0);
            if (ServerStaticValue.userList.size()==1){
                button2.setVisible(false);
//                p1.setVisible(true);
            }else {
                button1.setVisible(false);
//                p2.setVisible(false);
            }

        }
        if(e.getSource()==button2){
            try {
                BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(ServerStaticValue.userList.get(1).getOutputStream()));
                bw.write("full");
                bw.newLine();
                bw.flush();
            } catch (IOException ex) {
                throw new RuntimeException(ex);
            }
            ServerStaticValue.userList.remove(1);
            button2.setVisible(false);
        }


    }

    public void show(int i){
        if (i == 0){
            button1.setVisible(true);
        }else {
            button2.setVisible(true);
        }

    }

}
