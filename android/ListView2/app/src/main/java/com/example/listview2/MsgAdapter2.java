package com.example.listview2;

import android.content.Context;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ArrayAdapter;
import android.widget.TextView;

import androidx.annotation.NonNull;
import androidx.annotation.Nullable;
import androidx.constraintlayout.widget.ConstraintSet;
import androidx.recyclerview.widget.RecyclerView;

import java.util.ArrayList;

public class MsgAdapter2 extends ArrayAdapter<Msg> {

    private final int resourceId;

    public MsgAdapter2(@NonNull Context context, int resource, int textViewResourceId, @NonNull ArrayList<Msg> objects) {
        super(context, resource, textViewResourceId, objects);
        this.resourceId = textViewResourceId;

    }

    @NonNull
    @Override
    public View getView(int position, @Nullable View convertView, @NonNull ViewGroup parent) {
        Msg msg = getItem(position);
        View view;
        ViewHolder viewHolder;
        if (convertView == null){
            view = LayoutInflater.from(getContext()).inflate(resourceId,parent,false);
            viewHolder = new ViewHolder();
            viewHolder.msg_right = view.findViewById(R.id.msg_right);
            viewHolder.layout_left = view.findViewById(R.id.layout_left);
            viewHolder.msg_left = view.findViewById(R.id.msg_left);
            viewHolder.layout_right = view.findViewById(R.id.layout_right);
            view.setTag(viewHolder);
        }else {
            view = convertView;
            viewHolder = (ViewHolder) view.getTag();
        }

        if (msg.getType()==0){
            viewHolder.layout_left.setVisibility(View.GONE);
            viewHolder.msg_right.setText(msg.getContent());
        }else {
            viewHolder.layout_right.setVisibility(View.GONE);
            viewHolder.msg_left.setText(msg.getContent());
        }
        return view;
    }
    class ViewHolder{

        public TextView msg_right;
        public View layout_left;
        public TextView msg_left;
        public View layout_right;
    }
}
