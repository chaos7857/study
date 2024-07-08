package com.example.listview;

import android.health.connect.datatypes.units.Length;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.ListView;

import androidx.activity.EdgeToEdge;
import androidx.appcompat.app.AppCompatActivity;
import androidx.core.graphics.Insets;
import androidx.core.view.ViewCompat;
import androidx.core.view.WindowInsetsCompat;

import com.example.listview.adapter.MyAdapter;
import com.example.listview.bean.Student;

import java.util.ArrayList;

public class MainActivity extends AppCompatActivity {

    private ListView listView;
    private ArrayList<Student> students;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        EdgeToEdge.enable(this);
        setContentView(R.layout.activity_main);
        ViewCompat.setOnApplyWindowInsetsListener(findViewById(R.id.main), (v, insets) -> {
            Insets systemBars = insets.getInsets(WindowInsetsCompat.Type.systemBars());
            v.setPadding(systemBars.left, systemBars.top, systemBars.right, systemBars.bottom);
            return insets;
        });


        initUI();
        initData();
    }

    private void initData() {
        // 创建模拟数据
        students = new ArrayList<>();
        for (int i = 0; i < 100; i++) {
            students.add(new Student(i, "学生"+i,"hello"));
        }
        Log.d("data", students.toString());
        Log.d("data", students.size()+"");

        // 构造器
        MyAdapter myAdapter = new MyAdapter(students, getApplicationContext());
        listView.setAdapter(myAdapter);
        Log.d("data","over");
    }

    private void initUI() {
        listView = findViewById(R.id.list_view);
    }
}