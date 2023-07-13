# Tiny Wanderer Table Top Robot
The Tiny Wanderer roves around any table top or surface with edges and uses IR LED's and IR Photo Resistors to calculate distance to prevent it from falling off the edge. Utilizing a hand built PCB to control all the parts. It houses two servos to provide power to the wheels and a third unpowered wheel to stabilize. The brians of the robot come from one 85 attiny microcontroller.


| **Engineer** | **School** | **Area of Interest** | **Grade** |
|:--:|:--:|:--:|:--:|
| David M | Menlo School | Computer Engineering | Incoming junior


![Headstone Image](DavidHeadshot.png)

  
# Final Milestone

<iframe width="560" height="315" src="https://www.youtube.com/embed/SZJ_4FntxYo" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" allowfullscreen></iframe>

My final milestone was the culmination of all my hard work. After getting the servos to move, I went to try and get the servos working. I ran into an interesting error where, despite the wiring being correct, one of my sensors would read and the other wouldn't. I then figured out that sensors used with an Arduino have to be used one after another. After getting all of my components set up and working, it was time for the code, which proved challenging in its own right because of how the servos are controlled. It became a bit confusing to know how the sensors would work.


# Second Milestone

<iframe width="560" height="315" src="https://www.youtube.com/embed/NablTumPRHw" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" allowfullscreen></iframe>

For my second milestone, I started out trying to solder my own control board following the schematics of a PCB. I got all of the components in and then wired it all. After that, I realized that my microcontroller hadn't been flashed, meaning it didn't have any of the code, so I had to take it out and learn how to use different software like AVRdude and the terminal on my mac to do into the files and burn them onto the microcontroller. After all that effort, I ran into the problem of my control board just not working, and despite my determined efforts, I had to make the decision to pivot to an Arduino, so within a short time I had to find new sensors and learn to use an Arduino, something I had never done before. This first milestone shows how I learn to set up the software and get my servos connected and running with the code. Overall, this milestone tested my resolve and really brought what felt like an endless challenge, but it also made the end result of seeing this robot move so satisfying.


# First Milestone

<iframe width="560" height="315" src="https://www.youtube.com/embed/DBCdxo9IWro" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" allowfullscreen></iframe>

My first milestone was to construct the chassis of the little wanderer robot, which bears the control board and servos. The majority of it is constructed of plastic and screws, which create a box-like structure that wheels attach to. There is also one smaller ball bearing with rubber to act as a front stabilizer. This was quite difficult because many of the pieces of plastic had tolerance issues, meaning they didn't fit together, so I had to use a variety of tools at my disposal to widen holes or shrink parts, as well as the wrong screws and nuts. I had to become quite creative with how I made things work. I used a dremmel to expand gaps and make sanding quicker, as well as using it to cut things off. As well as the dremmel, I used the drill multiple times as the screws I had didn't fit. This overall created a challenge but also an opportunity for creativity and growth as I battled through the challenges and came up with innovative solutions.

# The Useless Machine


<iframe width="560" height="315" src="https://www.youtube.com/embed/xJU1WLDTIho" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" allowfullscreen></iframe>

For my first project, I made the useless machine, a machine that, when you click the switch, an arm comes out and turns the switch off; it uses a PCB to link the switch, a battery pack, and a motor; and it uses a PCB to connect the switch, a battery pack, and a motor. One of the most challenging aspects of this project was ensuring that all of the soldering was accurate and flush with the PCB, since if it wasn't, the project would still function but portions would not work. It provided a good entry point to my project as it requires me to build my own PCB uses jumper wires and solder bridges so it gave me some practice just soldering and getting parts where they need to be.

<!--- 
# Schematics 
Here's where you'll put images of your schematics. [Tinkercad](https://www.tinkercad.com/blog/official-guide-to-tinkercad-circuits) and [Fritzing](https://fritzing.org/learning/) are both great resoruces to create professional schematic diagrams, though BSE recommends Tinkercad becuase it can be done easily and for free in the browser. 

# Code
Here's where you'll put your code. The syntax below places it into a block of code. Follow the guide [here]([url](https://www.markdownguide.org/extended-syntax/)) to learn how to customize it to your project needs. 

```c++
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Hello World!");
}

void loop() {
  // put your main code here, to run repeatedly:

}
```

# Bill of Materials
Here's where you'll list the parts in your project. To add more rows, just copy and paste the example rows below.
Don't forget to place the link of where to buy each component inside the quotation marks in the corresponding row after href =. Follow the guide [here]([url](https://www.markdownguide.org/extended-syntax/)) to learn how to customize this to your project needs. 

| **Part** | **Note** | **Price** | **Link** |
|:--:|:--:|:--:|:--:|
| Item Name | What the item is used for | $Price | <a href="https://www.amazon.com/Arduino-A000066-ARDUINO-UNO-R3/dp/B008GRTSV6/"> Link </a> |
| Item Name | What the item is used for | $Price | <a href="https://www.amazon.com/Arduino-A000066-ARDUINO-UNO-R3/dp/B008GRTSV6/"> Link </a> |
| Item Name | What the item is used for | $Price | <a href="https://www.amazon.com/Arduino-A000066-ARDUINO-UNO-R3/dp/B008GRTSV6/"> Link </a> |

# Other Resources/Examples
One of the best parts about Github is that you can view how other people set up their own work. Here are some past BSE portfolios that are awesome examples. You can view how they set up their portfolio, and you can view their index.md files to understand how they implemented different portfolio components.
- [Example 1](https://trashytuber.github.io/YimingJiaBlueStamp/)
- [Example 2](https://sviatil0.github.io/Sviatoslav_BSE/)
- [Example 3](https://arneshkumar.github.io/arneshbluestamp/)

To watch the BSE tutorial on how to create a portfolio, click here.-->
