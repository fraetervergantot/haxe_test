import openfl.Lib;
import openfl.display.Bitmap;
import openfl.events.MouseEvent;

import feathers.events.TriggerEvent;

import feathers.layout.VerticalLayout;
import feathers.layout.HorizontalLayoutData;
import feathers.layout.VerticalLayoutData;
import feathers.layout.HorizontalLayout;

import feathers.controls.Application;
import feathers.controls.Label;
import feathers.controls.Alert;
import feathers.controls.Button;
import feathers.controls.LayoutGroup;






class HomeView extends Application{    
	
	private var picture:Bitmap;
	private var label_out:Label;

	public function new()
	{
		super();
		var vLayout = new VerticalLayout();
		vLayout.gap = 1.0;          // пробел между горизонтальными контейнерами
		this.layout = vLayout;

		this.createRows();
		this.createButtons();  
	}

	private var button:Button;
	private var rows:Array<LayoutGroup> = [];
	private var buttons:Array<Button> = [];


	private function createRows():Void{ 
		for (i in 0...4){
			var layout = new HorizontalLayout();
			layout.verticalAlign = MIDDLE;
			layout.gap = 1.0;
			var row = new LayoutGroup();
			row.layout = layout;
			row.layoutData = new VerticalLayoutData(100.0, 100.0);
			this.addChild(row);
			this.rows.push(row);
		}
	}


	private function createButtons():Void{
		for (i in 0...16){
			var button = new Button();
			button.text = "Button " +  Std.string(i);
			button.layoutData = new HorizontalLayoutData(100.0, 100.0);
			//button.icon = new Bitmap(Assets.getBitmapData("roma.jpg"));
			button.addEventListener(TriggerEvent.TRIGGER, buttons_trigerHandler);
			this.buttons.push(button);
			if(i < 4){
				this.rows[0].addChild(button);
			}
			else if (i<8){
				this.rows[1].addChild(button);
			}
			else if (i < 12){
				this.rows[2].addChild(button);
			}
			else if (i < 16){
				this.rows[3].addChild(button);
			}
		}
	}

	private function buttons_trigerHandler(event:TriggerEvent):Void{     // событие нажатия на кнопку
			var index = this.buttons.indexOf(event.currentTarget);
			var label = new Label();
			//this.showImage();  // функция, которая покажет картинку
			this.showMessage(index);   // функция, которая покажет MessageBox
	}

	private function showMessage(num:Int):Void{
		Alert.show("Button " + Std.string(num) + " was pressed", "Message", ["OK"]);  
	}

	private function scrollUp(event:MouseEvent):Void{
		if (picture.scrollRect.y > Lib.application.window.y){
			var rect = picture.scrollRect;
			rect.y -= 20;
			picture.scrollRect = rect;
		}
	}

	private function scrollDown(event:MouseEvent):Void{
		if (picture.scrollRect.y < Lib.application.window.height)
		{
			var rect = picture.scrollRect;
			rect.y += 20;
			picture.scrollRect = rect;
		}
	}

	private function scrollLeft(event:MouseEvent):Void{
		if (picture.scrollRect.x > Lib.application.window.x)
			{
				var rect = picture.scrollRect;
				rect.x -= 20;
				picture.scrollRect = rect;
			}
	}

	private function scrollRight(event:MouseEvent):Void{
		if (picture.scrollRect.x < Lib.application.window.width)
			{
				var rect = picture.scrollRect;
				rect.x += 20;
				picture.scrollRect = rect;
			}
	}

	/**
		private function showImage():Void{

		var panel = new Panel();
		var skin = new RectangleSkin();
		skin.fill = Gradient(LINEAR,[0xCCABD8, 0x6EC6CA], [1,1], [0,255]);
		skin.width =  Lib.application.window.width;
		skin.height = Lib.application.window.height;

		panel.backgroundSkin = skin;
		
		this.picture = new Bitmap(Assets.getBitmapData("colosseum.jpg"));
		var back_button = new Button("Back");
		//var seed = Math.floor(Math.random() * 100);

		picture.scrollRect = new Rectangle(0,0,picture.width, picture.height);


		var container = new ScrollContainer();
		
		
		var button_up = new Button("~");
		var button_down = new Button('d');
		var button_left = new Button("<");
		var button_right = new Button(">");

		button_up.x = 500;
		button_up.y = 500;

		button_down.x = 600;
		button_down.y = 600;


		button_right.x =  800;                    //Lib.application.window.width / 2;
		button_right.y =  800;                    // Lib.application.window.height - 70;

		button_left.x =   700;                    //Lib.application.window.width / 2 + button_left.width;
		button_left.y =  800;                     // Lib.application.window.height - 70;
		//this.getChildIndex(panel);

		//var label1 = new Label();
		//label1.x = 1200;
		//label1.y = 300;
		//label1.text = "индекс панели" + Std.string(this.getChildIndex(panel));
		//panel.addChild(picture);
		//panel.addChild(back_button);
		panel.addChild(container);
		panel.addChild(button_up);
		panel.addChild(button_down);
		panel.addChild(button_left);
		panel.addChild(button_right);
		addChild(panel);
		//container.addChild(picture);
		container.layout = new HorizontalLayout();
		back_button.addEventListener(TriggerEvent.TRIGGER, back_buttonHandler);  // кнопка НАЗАД

		button_up.addEventListener(MouseEvent.CLICK, scrollUp);
		button_down.addEventListener(MouseEvent.CLICK, scrollDown);

		button_left.addEventListener(MouseEvent.CLICK, scrollLeft);
		button_right.addEventListener(MouseEvent.CLICK, scrollRight);
		
		var label = new Label();
		//label.text = Std.string(this.getChildAt(4));
		label.x = 1000;
		label.y = 500;
		panel.addChild(label);
		//this.swapChildrenAt(0,4);
		//this.addEventListener(MouseEvent.MIDDLE_MOUSE_DOWN, scrollDown);
		//if ()
	}
	**/

}
