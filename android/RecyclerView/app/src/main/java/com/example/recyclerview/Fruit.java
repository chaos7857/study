package com.example.recyclerview;

public class Fruit {
    private String name;
    private int imgId;

    public Fruit() {
    }

    public Fruit(String name, int imgId) {
        this.name = name;
        this.imgId = imgId;
    }

    /**
     * 获取
     *
     * @return name
     */
    public String getName() {
        return name;
    }

    /**
     * 设置
     *
     * @param name
     */
    public void setName(String name) {
        this.name = name;
    }

    /**
     * 获取
     *
     * @return imgId
     */
    public int getImgId() {
        return imgId;
    }

    /**
     * 设置
     *
     * @param imgId
     */
    public void setImgId(int imgId) {
        this.imgId = imgId;
    }

    public String toString() {
        return "Fruit{name = " + name + ", imgId = " + imgId + "}";
    }
}
