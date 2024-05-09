package com.xinGuan.client;

import com.xinGuan.util.ScreenUtils;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.IOException;

public class EnterFrame extends JFrame implements ActionListener{
    final int WIDTH = 500;
    final int HEIGHT = 300;
    JButton enterBtn;
    TextField uField;
    public EnterFrame(){
        setIconImage(Toolkit.getDefaultToolkit().getImage(StaticValue.path+"s_mario_jump1_R.png"));
        initView();
        initJFrame();
        this.setVisible(true);

    }
    public void initView() {
        //添加背景图片
        ImageIcon bg = new ImageIcon(StaticValue.path+"maliao.jpeg");
        JLabel lable = new JLabel(bg);
        lable.setSize(bg.getIconWidth(),bg.getIconHeight());
        this.getLayeredPane().add(lable,new Integer(Integer.MIN_VALUE));
//        JPanel pan = (JPanel)this.getContentPane();
//        pan.setOpaque(false);
//        pan.setLayout(new FlowLayout());

        //组装界面
        Box vBox = Box.createVerticalBox();
        Font centerFont = new Font("楷体",Font.PLAIN,20);
        Font centerFont2 = new Font("宋体",Font.PLAIN,26);
        Font centerFont3 = new Font("楷体",Font.PLAIN,25);
        //组装IP
        Box uBox = Box.createHorizontalBox();
        JLabel uLabel = new JLabel("请输入房间IP:");

        uField = new TextField("127.0.0.1", 15);
        uLabel.setFont(centerFont3);
        uField.setFont(centerFont);
        uField.setSize(100,25);


        Component hStrut = Box.createHorizontalStrut(50);
        Component hStrut2 = Box.createHorizontalStrut(50);

        uBox.add(hStrut2);
        uBox.add(uLabel);
        uBox.add(Box.createHorizontalStrut(7));
        uBox.add(uField);
        uBox.add(hStrut);

        //按钮

        enterBtn = new JButton("进入游戏");
        enterBtn.setFont(centerFont2);
        enterBtn.setBackground(new Color(216,163,103));
        enterBtn.addActionListener(this);

        Component vStrut = Box.createVerticalStrut(70);
        Component vStrut2 = Box.createVerticalStrut(80);

        vBox.add(vStrut2);
        vBox.add(uBox);
        vBox.add(Box.createVerticalStrut(40));
        vBox.add(enterBtn);
        vBox.add(vStrut);
        this.setContentPane(vBox);
       // this.pack();




    }

    //将窗口放在桌面中间
    public void initJFrame(){
        this.setBounds((ScreenUtils.getScreenWidth() - WIDTH) / 2, (ScreenUtils.getScreenHeight() - HEIGHT) / 2, WIDTH, HEIGHT);
        this.setTitle("超级玛丽");
        this.setDefaultCloseOperation(EXIT_ON_CLOSE);
        this.setResizable(false);
    }

    //客户端程序入口，弹出登录注册页面
    public static void main(String[] args) {
        new EnterFrame();
    }
    //设置监听
    @Override
    public void actionPerformed(ActionEvent e) {
        //        System.out.println(e.getSource());
        if (e.getSource() == enterBtn){
            StaticValue.IP = uField.getText();
//            System.out.println(StaticValue.IP);
            try {
                new ReadyFrame();
                this.setVisible(false);
            } catch (IOException ex) {
                JOptionPane.showMessageDialog(this,"连接失败，请检查IP是否正确或服务端是否在线");
//                throw new RuntimeException(ex);
            }
        }
    }
}
