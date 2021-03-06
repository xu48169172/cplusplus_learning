##c++ 中的代码重用

c++的主要目标是实现代码重用，公有继承是实现这种目标的机制之一。但并不是唯一的机制。其中一种方法是类成员变量是一个类的对象， 这种方法称为包含 组合 或者层次化。

另一种方法是使用私有或者保护继承。 通常包含 私有继承和保护继承用于实现has-a 关系，即新的类将包含另一个对象。

```
class student 
{
private:
	string name;
	valarray<double> scores;
};
```
上述类将数据成员声明为私有的，这意味着student类的成员函数可以使用string 和 valarray<int> 类的公有接口来访问和修改 name 和scores 对象。但是在类外不能这样做，而只能通过student类的公有接口访问 name 和 scores。对于这种情况，通常被描述为student类获得了其成员对象的实现，但是没有继承接口。

使用公有继承时，类可以继承接口，可能还有实现，基类的纯虚函数提供接口，但不提供实现。获得接口时is-a关系的组成部分。而使用组合，类可以获得实现，但不能获得接口，不继承接口时has-a关系的组成部分。

####初始化被包含的对象
构造函数全部使用熟悉的成员初始化列表语法来初始化name 和 scores成员对象。

对于继承的对象，构造函数在成员初始化列表中使用类名来调用特定的基类构造函数，对于成员对象，构造函数则使用成员名。

当初始化列表包含多个项目时，这些项目被初始化的顺序为它们被声明的顺序，而不是它们在初始化列表中的顺序。

####使用包含对象的接口
被包含对象的接口不是公有的，但可以在类方法中使用它。  这个还是有疑惑的啊


###私有继承

还有一种实现has-a关系是私有继承，使用私有继承，基类的公有成员和保护成员都将成为派生类的私有成员，这意味着基类方法将不会称为派生对象公有接口的一部分，但可以在派生类的成员函数中使用它们。

私有继承，类继承实现。

```
class student:private std::string, private std::valarray<double>
{
public:
	...
}
```

私有继承提供了两个无名的子对象成员。
 
#### 初始化基类组件
