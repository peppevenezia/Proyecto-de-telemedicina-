thingSpeakURL = 'http://api.thingspeak.com/';
thingSpeakWriteURL = [thingSpeakURL 'update'];
writeApiKey = 'VU9QO1Y7269MEORN';
fieldName = 'Data';
fieldValue = 4;
response = webwrite(thingSpeakWriteURL,'api_key',writeApiKey,fieldName,fieldValue)