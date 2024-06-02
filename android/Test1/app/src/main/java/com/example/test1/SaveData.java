package com.example.test1;

import android.os.Bundle;
import android.view.View;
import android.widget.ListView;

import androidx.annotation.Nullable;
import androidx.appcompat.app.AppCompatActivity;

import com.example.test1.adapter.MyAdapter;
import com.example.test1.bean.Student;

import java.util.ArrayList;
import java.util.List;

import kotlin.collections.ArrayDeque;

public class SaveData extends AppCompatActivity {

    private ListView lv;
    private List<Student> students;

    @Override
    protected void onCreate(@Nullable Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.save_data);
        initUI();
        initData();
    }

    private void initData() {
        students = new ArrayList<>();
        for (int i = 0; i < 100; i++) {
            students.add(new Student(i, "学术"+i,"hhhhhhhhhh"));
        }
        MyAdapter myAdapter = new MyAdapter(students,getApplicationContext());
        lv.setAdapter(myAdapter);
    }

    private void initUI() {
        lv = findViewById(R.id.list_view);
    }
}
