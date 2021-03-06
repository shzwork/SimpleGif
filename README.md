# SimpleGif
An Android NDK GIF Library
========
GIF library built with cmake for usage with android gradle build system.
This c source code refer to android-ndk-gif.
The java api is similar to Glide,but the performance is better than Glide.


Note
========

Now,the SimpleGif's lifecycle can bind with the Fragment and Activity's lifecycle.

The next pictures are showing Runtime CPU and memory Usage comparerison between Glide and SimpleGif,Both of them are displaying
nine gifs on the screen,

SimpleGif:
![SimpleGif](https://github.com/yylyingy/SimpleGif/blob/master/PICTURES/Simple.png)

Glide:
![Glide](https://github.com/yylyingy/SimpleGif/blob/master/PICTURES/Glide.png)


Blog
[http://blog.csdn.net/qq372848728/article/details/59104104](http://blog.csdn.net/qq372848728/article/details/59104104)

How do I use SimpleGif?
-------------------
The api of SimpleGif is similar to Glide,but SimpleGif is a NDK library.
Simple use cases will look something like this:

```java
// For a simple view:
@Override public void onCreate(Bundle savedInstanceState) {
  ...
  ImageView imageView = (ImageView) findViewById(R.id.my_image_view);

  SimpleGif.with(this).load("/sdcard/simple.gif").into(imageView);
}
```




Decode
========

![gif](https://github.com/yylyingy/SimpleGif/blob/master/sample/src/main/assets/display.gif)

![gif](https://github.com/yylyingy/SimpleGif/blob/master/sample/src/main/assets/sample1.gif)

Feature
========
* GIF Encoding.
* GIF Decoding.