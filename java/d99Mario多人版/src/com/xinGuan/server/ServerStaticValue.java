package com.xinGuan.server;

import java.net.Socket;
import java.util.ArrayList;

public class ServerStaticValue {
    public static ArrayList<Socket> userList = new ArrayList<>();
    public static String path = System.getProperty("user.dir") + "/images/";

}
