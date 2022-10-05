import Tab1View.HomeView;
import feathers.controls.navigators.TabItem;
import feathers.data.ArrayCollection;
import feathers.controls.navigators.TabNavigator;
import feathers.controls.Application;


class HelloWorld extends Application {

	public function new() {
		super();
		var navigator = new TabNavigator();   // View
		addChild(navigator);
		navigator.dataProvider = new ArrayCollection([
			TabItem.withClass("1 tab",HomeView),           // Model
			TabItem.withClass("2 tab", HomeView),
			TabItem.withClass("3 tab",HomeView)
		]);}

}
