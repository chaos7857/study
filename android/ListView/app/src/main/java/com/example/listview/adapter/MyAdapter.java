package com.example.listview.adapter;

import android.content.Context;
import android.util.Log;
import android.view.View;
import android.view.ViewGroup;
import android.widget.BaseAdapter;
import android.widget.TextView;

import com.example.listview.R;
import com.example.listview.bean.Student;

import java.util.ArrayList;

public class MyAdapter extends BaseAdapter {
    private final ArrayList<Student> students;
    private final Context context;
    private TextView name;
    private TextView des;

    public MyAdapter(ArrayList<Student> students, Context applicationContext) {
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
            convertView = View.inflate(context, R.layout.list_item,null);
        }
        name = convertView.findViewById(R.id.name);
        des = convertView.findViewById(R.id.des);
        name.setText(students.get(position).getName());
        des.setText(students.get(position).getDes());
        Log.d("data", position+"");
        return convertView;
    }
}
