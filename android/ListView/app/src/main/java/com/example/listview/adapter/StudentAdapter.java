package com.example.listview.adapter;

import android.content.Context;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ArrayAdapter;

import androidx.annotation.NonNull;
import androidx.annotation.Nullable;

import com.example.listview.bean.Student;

import java.util.List;

public class StudentAdapter extends ArrayAdapter<Student> {
    private int id;
    public StudentAdapter(@NonNull Context context, int resource) {
        super(context, resource);
    }

    public StudentAdapter(@NonNull Context context, int resource, int textViewResourceId) {
        super(context, resource, textViewResourceId);
    }

    public StudentAdapter(@NonNull Context context, int resource, @NonNull Student[] objects) {
        super(context, resource, objects);
    }

    public StudentAdapter(@NonNull Context context, int resource, int textViewResourceId, @NonNull Student[] objects) {
        super(context, resource, textViewResourceId, objects);
    }

    public StudentAdapter(@NonNull Context context, int resource, @NonNull List<Student> objects) {
        super(context, resource, objects);
    }

    public StudentAdapter(@NonNull Context context, int resource, int textViewResourceId, @NonNull List<Student> objects) {
        super(context, resource, textViewResourceId, objects);
        this.id = textViewResourceId;
    }

    @NonNull
    @Override
    public View getView(int position, @Nullable View convertView, @NonNull ViewGroup parent) {
        return super.getView(position, convertView, parent);
    }
}
