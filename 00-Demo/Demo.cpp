//@version=5
strategy("Nifty Gap-Up First Candle Breakout", overlay=true)

// Define time range (Indian market hours)
startTime = timestamp(year(timenow), month(timenow), day(timenow), 9, 15)
endTime = timestamp(year(timenow), month(timenow), day(timenow), 10, 30)

// Nifty gap-up condition (100 points gap up)
prevClose = request.ohlc(syminfo.tickerid, "D").close[1]
gapUp = open >= prevClose + 100

// First candle low (5-minute chart)
firstCandleLow = ta.valuewhen(time == startTime, low, 0)

// Entry condition: Price breaks first candle low before 10:30 AM
entryCondition = gapUp and time >= startTime and time <= endTime and low < firstCandleLow

// Stop Loss and Target
entryPrice = firstCandleLow
stopLoss = entryPrice + 40
targetPrice = entryPrice - 100  

// Execute trade
if entryCondition
    strategy.entry("Short Trade", strategy.short)
    strategy.exit("Target", from_entry="Short Trade", limit=targetPrice, stop=stopLoss)

// Plot lines
plot(firstCandleLow, title="First Candle Low", color=color.red, linewidth=2, style=plot.style_dashed)
plot(stopLoss, title="Stop Loss", color=color.blue, linewidth=2, style=plot.style_dotted)
plot(targetPrice, title="Target", color=color.green, linewidth=2, style=plot.style_dotted)

// Alerts
alertcondition(entryCondition, title="Short Entry", message="Nifty Short Entry Triggered!")
alertcondition(low <= targetPrice, title="Target Hit", message="Nifty Target Achieved!")
alertcondition(high >= stopLoss, title="Stop Loss Hit", message="Nifty Stop Loss Hit!")
