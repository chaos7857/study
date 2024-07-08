package com.example.listview2;

import android.content.Context;
import android.text.Layout;
import android.view.View;
import android.view.ViewGroup;
import android.widget.BaseAdapter;
import android.widget.TextView;

import java.util.ArrayList;

public class MsgAdapter extends BaseAdapter {
    private final Context context;
    private ArrayList<Msg> msgs;
    private TextView msg_right;
    private TextView msg_left;


    public MsgAdapter(Context applicationContext, ArrayList<Msg> msgs) {
        this.msgs = msgs;
        this.context = applicationContext;
    }

    @Override
    public int getCount() {
        return msgs.size();
    }

    @Override
    public Object getItem(int position) {
        return msgs.get(position);
    }

    @Override
    public long getItemId(int position) {
        return position;
    }

    @Override
    public View getView(int position, View convertView, ViewGroup parent) {
        ViewHolder viewHolder;
        if (convertView == null) {
            convertView = View.inflate(context,R.layout.list_item,null);
            viewHolder = new ViewHolder();
            viewHolder.msg_right = convertView.findViewById(R.id.msg_right);
            viewHolder.layout_left = convertView.findViewById(R.id.layout_left);
            viewHolder.msg_left = convertView.findViewById(R.id.msg_left);
            viewHolder.layout_right = convertView.findViewById(R.id.layout_right);
            convertView.setTag(viewHolder);
        }else {
            viewHolder = (ViewHolder) convertView.getTag();
        }
        if (msgs.get(position).getType()==0){
            viewHolder.layout_left.setVisibility(View.GONE);
            msg_right.setText(msgs.get(position).getContent());
        }else {
            viewHolder.layout_right.setVisibility(View.GONE);
            msg_left.setText(msgs.get(position).getContent());
        }
        return convertView;
    }
    class ViewHolder{

        public TextView msg_right;
        public View layout_left;
        public TextView msg_left;
        public View layout_right;
    }
}
