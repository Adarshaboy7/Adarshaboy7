import java.awt.*;
import java.awt.event.*;
import java.applet.*;
public class abc extends Applet implements ActionListener
{
	private Label l1,l2,l3;
	private TextField t1,t2,t3;
	private Button b1,b2;
	private int x,y,z;
	private Panel p;
	public void init()
	{
		l1=new Label("1st No: ");
		l2=new Label("2nd No: ");
		l3=new Label("Result: ");
		t1=new TextField(20);
		t2=new TextField(20);
		t3=new TextField(20);
		b1=new Button("SUM");
		b2=new Button("Reset");
		p=new Panel();
		p.setLayout(new GridLayout(4,2,20,20));
		p.add(l1);
		p.add(t1);
		p.add(l2);
		p.add(t2);
		p.add(l3);
		p.add(t3);
		p.add(b1);
		p.add(b2);
		add(p);
		p.setBackground(Color.yellow);
		b1.addActionListener(this);
		b2.addActionListener(this);
		setBackground(Color.cyan);
	}
	public void paint(Graphics g)
	{
		g.drawString("sum ="+z,350,350);
	}
	public void actionPerformed(ActionEvent e)
	{
		if(e.getSource()==b1)
		{
			x=Integer.parseInt(t1.getText());
			y=Integer.parseInt(t2.getText());
			z=x+y;
			t3.setText(String.valueOf(z));
			repaint();
			
		}
		else if(e.getSource()==b2)
		{
			t1.setText("");
			t2.setText("");
			t3.setText("");
			z=0;
			repaint();
		}
	}
}
