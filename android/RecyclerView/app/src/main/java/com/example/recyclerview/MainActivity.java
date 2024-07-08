package com.example.recyclerview;

import android.annotation.SuppressLint;
import android.os.Bundle;
import android.util.Log;
import android.widget.LinearLayout;

import androidx.activity.EdgeToEdge;
import androidx.appcompat.app.AppCompatActivity;
import androidx.core.graphics.Insets;
import androidx.core.view.ViewCompat;
import androidx.core.view.WindowInsetsCompat;
import androidx.recyclerview.widget.LinearLayoutManager;
import androidx.recyclerview.widget.RecyclerView;
import androidx.recyclerview.widget.StaggeredGridLayoutManager;

import java.util.ArrayList;
import java.util.List;

public class MainActivity extends AppCompatActivity {
    private List<Fruit> fruits = new ArrayList<>();

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        initData();

        @SuppressLint({"MissingInflatedId", "LocalSuppress"})
        RecyclerView recyclerView = findViewById(R.id.recycle_view);
        // 线性布局
//        LinearLayoutManager linearLayoutManager = new LinearLayoutManager(this);
//        recyclerView.setLayoutManager(linearLayoutManager);

        // 瀑布流
        StaggeredGridLayoutManager staggeredGridLayoutManager = new StaggeredGridLayoutManager(3,StaggeredGridLayoutManager.VERTICAL);
        recyclerView.setLayoutManager(staggeredGridLayoutManager);

        FruitAdapter fruitAdapter = new FruitAdapter(fruits);
        recyclerView.setAdapter(fruitAdapter);
    }

    private void initData() {
        int i1 = 0xFFFFFFFF;
        int i2 = 0xFFFFFFFF;
        int i3 = 0xFFFFFFFF;
        Fruit fruit;
        for (int j = 0; j < 1000; j++) {
            if (j%3==0){
                i1 -= 0x00000001;
                fruit = new Fruit(j+1+"",i1);
                fruits.add(fruit);
            } else if (j%3==1) {
                i2 -= 0x00000100;
                fruit = new Fruit(j+1+"",i2);
                fruits.add(fruit);
            }else {
                i3 -= 0x00100000;
                fruit = new Fruit(j+1+"",i3);
                fruits.add(fruit);
            }
            Log.d("i_value",j+":"+i1+"-"+i2+"-"+i3);
        }
    }
}