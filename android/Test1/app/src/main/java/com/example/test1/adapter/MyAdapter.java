package com.example.test1.adapter;

import android.content.Context;
import android.view.View;
import android.view.ViewGroup;
import android.widget.BaseAdapter;
import android.widget.TextView;

import androidx.annotation.ContentView;

import com.example.test1.R;
import com.example.test1.bean.Student;

import java.util.List;

public class MyAdapter extends BaseAdapter {
    private final Context context;
    private final List<Student> students;

    public MyAdapter(List<Student> students, Context applicationContext) {
        this.students = students;
        this.context = applicationContext;
    }

    @Override
    public int getCount() {
        return students.size();
    }

    @Override
    public Object getItem(int position) {
        return students.get(position);
    }

    @Override
    public long getItemId(int position) {
        return position;
    }

    @Override
    public View getView(int position, View convertView, ViewGroup parent) {
        if (convertView == null) {
            convertView = View.inflate(context, R.layout.item_list,null);
        }
        TextView name = convertView.findViewById(R.id.tv_name);
        TextView des = convertView.findViewById(R.id.tv_des);
        name.setText(students.get(position).getName());
        des.setText(students.get(position).getDes());
        return convertView;
    }
}
