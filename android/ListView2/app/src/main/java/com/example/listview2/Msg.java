package com.example.listview2;

public class Msg {
    private String content;
    private int type;
    private static final int TYPE_SEND = 1;
    private static final int TYPE_RECEIVED = 0;

    public Msg() {
    }

    public Msg(String content, int type) {
        this.content = content;
        this.type = type;
    }

    /**
     * 获取
     *
     * @return content
     */
    public String getContent() {
        return content;
    }

    /**
     * 设置
     *
     * @param content
     */
    public void setContent(String content) {
        this.content = content;
    }

    /**
     * 获取
     *
     * @return type
     */
    public int getType() {
        return type;
    }

    /**
     * 设置
     *
     * @param type
     */
    public void setType(int type) {
        this.type = type;
    }

    public String toString() {
        return "Msg{content = " + content + ", type = " + type + "}";
    }
}
