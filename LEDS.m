pins = [2, 3, 4, 5, 6, 7];
leds = 63;
for i = 1:1:6
      state = bitget(leds, i);
      writeDigitalPin(a, "D"+pins(i), state); 
end
