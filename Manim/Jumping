from big_ol_pile_of_manim_imports import *
from extract_scene import*

class jumping(Scene):
    def construct(self):
        qed = TexMobject("\\text{QED.}")
        qed.to_corner(DOWN+RIGHT)
        t0 = TextMobject("本期视频具有整活性质,对于视频中的明显数学错误请忽略（")
        t0.set_width(5)
        t0.to_corner(DOWN + RIGHT)
        self.play(Write(t0))
        t1 = TextMobject("众所周知,著名数学家 Jumping 于今年提出了如下几个定理:")
        t1.set_width(11)
        # t3 = TextMobject("它们分别被称为 Jumping 第一、第二")
        d1 = TexMobject("\pi ^ z = \pi z").next_to(LEFT, buff=-5)
        d2 = TexMobject("\displaystyle\sum ^ {\infty}=\dfrac{\infty}{2}").next_to(LEFT, buff = -2)
        d3 = TexMobject("\dot{z} = \\text {主} = 6").next_to(RIGHT, buff=3)
        d4 = TexMobject("\\text{方面} \Leftrightarrow \\text{分析}").next_to(RIGHT, buff = -0.9)
        t2 = TextMobject("本期视频就来探究它们的应用")
        self.wait()
        t1.to_corner(UP+LEFT)
        self.play(Write(t1, shift=LEFT))
        self.wait(2)
        self.play(
            Write(d1),
            Write(d2),
            Write(d3),
            Write(d4)
        )
        self.wait(2)
        self.play(
            Uncreate(t1),
            d1.shift, UP * 3, 
            d2.shift, UP * 3,
            d3.shift, UP * 3, 
            d4.shift, UP * 3
        )
        self.play(
            Write(t2)
        )
        self.wait(2)
        self.play(
            Uncreate(t0),
            Uncreate(t2),
            Uncreate(d1),
            Uncreate(d2),
            Uncreate(d3),
            Uncreate(d4)
        )
        t1 = TexMobject("\\text{首先是 }\displaystyle\sum ^ {\infty}=\dfrac{\infty}{2}")
        t1.to_corner(UP + LEFT)
        """
        d4 = TexMobject("\displaystyle\sum = \dfrac{1}{2}")
        t2 = TexMobject("\\text{两边约去 }\infty")
        t2.to_corner(UP + LEFT)
        self.play(Write(t1, shift = LEFT))
        self.play(
            Write(d2),
            ReplacementTransform(t1, t2),
            ReplacementTransform(d2, d4)
        )
        """
        t2 = TextMobject("利用这个公式可以轻松地把拉马努金公式证伪")
        d1 = TexMobject("\displaystyle\dfrac{1}{\pi}=\dfrac{2\sqrt{2}}{9801}\sum^{\infty}_{k=0}\dfrac{(4k)!(1103+26390k)}{(k!)^4 396^{4k}}")
        t2.to_corner(UP + LEFT)
        self.play(
            Write(t1)
        )
        self.wait(2)
        self.play(
            ReplacementTransform(t1, t2), 
            Write(d1),
        )
        self.wait(2)
        t3 = TexMobject("\\text{将 } \displaystyle\sum ^ {\infty}=\dfrac{\infty}{2} \\text{代入, 得}")
        d2 = TexMobject("\displaystyle\dfrac{1}{\pi} = \dfrac{2\sqrt{2}}{9801}\\times\dfrac{\infty}{2}\\times\dfrac{(4k)!(1103+26390k)}{(k!)^4 396^{4k}}|_{k=0}")
        d3 = TexMobject("\displaystyle\dfrac{1}{\pi} = \dfrac{2\sqrt{2}}{9801}\\times\dfrac{\infty}{2}\\times\dfrac{0}{0}")
        t3.to_corner(UP + LEFT)
        t4 = TexMobject("\\text{由于 } \dfrac{0}{0} \\text{无定义,所以拉马努金公式不成立}")
        qed = TexMobject("\\text{QED.}")
        qed.to_corner(DOWN+RIGHT)
        self.play(
            ReplacementTransform(t2, t3),
            ReplacementTransform(d1, d2)
        )
        self.wait(2)
        self.play(
            ReplacementTransform(d2, d3)
        )
        self.wait(2)
        self.play(
            Uncreate(t3),
            ReplacementTransform(d3, t4),
            Write(qed)
        )
        self.wait(2)
        self.play(
            Uncreate(t4), Uncreate(qed)
        )
        t1 = TexMobject("\\text{接下来是对  }\pi ^ z = \pi z \\text{ 的探究:}")
        t2 = TexMobject("\\text{由于  } \pi \\text{ 作为一个常数, 那么易证}")
        d1 = TexMobject("c^z = cz")
        t3 = TexMobject("\\text{其中 } c \\text{ 为常数}")
        t4 = TextMobject("我们就此得到一个新的定理")
        self.play(
            Write(t1)
        )
        self.wait(2)
        t2.to_corner(UP + LEFT)
        self.play(
            Uncreate(t1),
            Write(t2),
        )
        self.wait(2)
        t3.to_corner(DOWN + RIGHT)
        self.play(
            Write(d1),
            Write(t3)
        )
        self.wait(2)
        self.play(
            Uncreate(d1),
            Uncreate(t3),
            Uncreate(t2)
        )
        self.play(Write(t4))
        self.wait(2)
        self.play(Uncreate(t4))

        t1 = TextMobject("我们还可以将以上几个定理结合")
        t2 = TextMobject("证明：")
        t0 = TexMobject("\displaystyle\sum^{\infty}_{k=1}\dfrac{1}{k^2}=\dfrac{\pi^2}{6}")
        self.play(
            Write(t1)
        )
        self.wait(2)    
        t2.to_corner(UP + LEFT)
        self.play(
            Uncreate(t1),
            Write(t2),
            Write(t0)
        )
        self.wait(2)
        t1 = TexMobject("\\text{将 } \displaystyle\sum ^ {\infty}=\dfrac{\infty}{2} \\text{代入,得}")
        d1 = TexMobject("\dfrac{\infty}{2} \\times \dfrac{1}{k ^ 2} | _ {k = 1}")
        d2 = TexMobject("\dfrac{\infty}{2} \\times \dfrac{1}{1^2}")
        t1.to_corner(UP + LEFT)
        self.play(
            ReplacementTransform(t2, t1),
            ReplacementTransform(t0, d1)
        )
        self.wait()
        self.play(
            ReplacementTransform(d1, d2)
        )
        self.wait()
        self.play(Uncreate(d2), Uncreate(t1))
        t1 = TexMobject("\\text{将 }\infty \\text{看作两个单位圆, 那么}")
        t1.to_corner(UP + LEFT)
        d1 = TexMobject("\infty = 4\pi")
        t2 = TexMobject("\\text{因为 } c^z = cz \\text{, 则有}")
        t2.to_corner(UP + LEFT)
        d2 = TexMobject("\infty = (2\pi)^2")
        t3 = TextMobject("代入, 得")
        t3.to_corner(UP + LEFT)
        d3 = TexMobject("\dfrac{\infty}{2} \\times \dfrac{1}{1^2} = \dfrac{(2\pi)^2}{2} \\times \dfrac{1}{1^2}")
        t4 = TexMobject("\\text{应用定理  } c^z = cz")
        t4.to_corner(UP + LEFT)
        d4 = TexMobject("\dfrac{(2\pi)^2}{2} \\times \dfrac{1}{1^2} = \dfrac{(2\pi)^2}{2}\\times \dfrac{1}{12}")
        d5 = TexMobject("\dfrac{(2\pi)^2}{2}\\times \dfrac{1}{12} = \dfrac{\pi^2}{6}")
        t5 = TextMobject("综上")
        t5.to_corner(UP + LEFT)
        self.play(Write(t1), Write(d1))
        self.wait(2)
        self.play(
            ReplacementTransform(t1, t2),
            ReplacementTransform(d1, d2)
        )
        self.wait(2)
        self.play(
            ReplacementTransform(t2, t3),
            ReplacementTransform(d2, d3)
        )
        self.wait(2)
        self.play(
            ReplacementTransform(t3, t4),
            ReplacementTransform(d3, d4)
        )
        self.wait(2)
        self.play(
            ReplacementTransform(d4, d5)
        )
        self.wait(2)
        t0 = TexMobject("\displaystyle\sum^{\infty}_{k=1}\dfrac{1}{k^2}=\dfrac{\pi^2}{6}")
        qed = TexMobject("\\text{QED.}")
        qed.to_corner(DOWN+RIGHT)
        self.play(
            ReplacementTransform(d5, t0),
            ReplacementTransform(t4, t5),
            Write(qed)
        )
        self.wait(2)
        self.play(
            Uncreate(t0),
            Uncreate(t5),
            Uncreate(qed)
        )
        self.wait(2)
        t1 = TexMobject("\displaystyle z \\text{ 是关于 } s \\text{ 的可微函数, 方面问题 } \sum \dfrac{\mathrm dz}{\mathrm ds} \\text{ 的解}")
        t2 = TexMobject("\\text{因为: 方面} \Leftrightarrow \\text{分析, 那么原命题等价于}")
        d1 = TexMobject("\\text{分析问题 } \sum \dfrac{\mathrm dz}{\mathrm ds} \\text{ 的解}")
        t3 = TexMobject("\displaystyle\\text{由 }\sum ^ {\infty}=\dfrac{\infty}{2} \\text{ 得}")
        d2 = TexMobject("\displaystyle\sum = \dfrac{1}{2}")
        t4 = TexMobject("\\text{将 }\displaystyle\sum = \dfrac{1}{2} \\text{ 代入原式, 得}")
        d3 = TexMobject("\sum \dfrac{\mathrm dz}{\mathrm ds}=\dfrac{1}{2} \\times \dfrac{\mathrm dz}{\mathrm ds}")
        t5 = TexMobject("\\text{因为 } \dfrac{\mathrm dz}{\mathrm ds} = \dot{z} = \\text {主} = 6 \\text{, 则有}")
        d4 = TexMobject("\dfrac{1}{2} \\times \dfrac{\mathrm dz}{\mathrm ds} = \dfrac{1}{2} \\times 6")
        d5 = TexMobject("\sum \dfrac{\mathrm dz}{\mathrm ds} = 3")
        t1.to_corner(UP + LEFT)
        self.play(
            Write(t1)
        )
        self.wait(2)
        t2.to_corner(UP + LEFT)
        self.play(
            ReplacementTransform(t1, t2),
            Write(d1)
        )
        self.wait(2)
        self.play(
            Uncreate(t2),
            Uncreate(d1)
        )
        t3.to_corner(UP + LEFT)
        self.play(
            Write(t3),
            Write(d2)
        )
        self.wait(2)
        t4.to_corner(UP + LEFT)
        self.play(
            ReplacementTransform(t3, t4),
            ReplacementTransform(d2 ,d3)
        )
        self.wait(2)
        t5.to_corner(UP + LEFT)
        self.play(
            ReplacementTransform(t4, t5),
            ReplacementTransform(d3, d4)
        )
        self.wait(2)
        self.play(
            ReplacementTransform(d4, d5)
        )
        self.wait(2)
        self.play(
            Uncreate(t5),
            Uncreate(d5)
        )
        self.wait()
        thx = TexMobject("\\text{感谢观看！}")
        self.play(
            Write(thx)
        )
