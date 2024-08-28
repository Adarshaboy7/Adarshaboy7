import java.awt.*;
import javax.swing.*;
import java.awt.event.*;
public class abcform2 extends JFrame implements ItemListener
{
	private JRadioButton r1,r2,r3;
	private Container c=null;
	public abcform2()
	{
		super("calc");
		r1=new JRadioButton("red");
		r2=new JRadioButton("green");
		r3=new JRadioButton("blue");
		ButtonGroup br=new ButtonGroup();
		br.add(r1);
		br.add(r2);
		br.add(r3);
		
		c=getContentPane();
		c.setLayout(new FlowLayout());
		c.add(r1);
		c.add(r2);
		c.add(r3);
		r1.addItemListener(this);
		r2.addItemListener(this);
		r3.addItemListener(this);
		
		setResizable(false);
		setSize(400,200);
		setVisible(true);
	}
	public void itemStateChanged(ItemEvent e)
	{
		JRadioButton j=(JRadioButton) e.getItem();
		if(j.getText().equals("red"))
		{
			c.setBackground(Color.red);
		}
		else if(j.getText().equals("green"))
		{
			c.setBackground(Color.green);
		}
		else if(j.getText().equals("blue"))
		{
			c.setBackground(Color.blue);
		}
	}
	public static void main(String[]args)
	{
		abcform2 r=new abcform2();
		r.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);	
			
			
	}
}
