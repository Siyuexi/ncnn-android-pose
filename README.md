采用ncnn框架在android手机上部署人体姿态估计模型，模型方法是自上而下的。

人体检测器采用的是yolox，借鉴了[yolox-ncnn](https://github.com/FeiGeChuanShu/ncnn-android-yolox)的实现（其实就是直接拿来当人体检测器），感谢大佬！具体配置也可以参考一下，这里都配好了。

模型文件可以采用别的姿态估计模型。这里是对MSPN的模型进行了轻量化处理，然后再COCO数据集上进行训练得到的轻量级模型。

在红米K30pro（骁龙865）上可以达到十几帧的速度（CPU），单独的yolox可以达到25FPS，目前只实现了同步处理，也就是yolox执行完之后再进行姿态估计，后续可能会考虑改成异步，进一步提升帧率。

在坤坤的篮球视频上测了一波，感觉还不错？望粉丝轻喷

---

5/7/2022:Gestaltxu Updated his self-defined released in this repo
