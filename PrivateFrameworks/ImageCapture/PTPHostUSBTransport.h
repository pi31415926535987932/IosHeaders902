/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:59 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageCapture/ImageCapture-Structs.h>
#import <ImageCapture/PTPTransport.h>

@class NSString, NSMutableData;

@interface PTPHostUSBTransport : PTPTransport {

	unsigned long _locationID;
	unsigned short _vendorID;
	unsigned short _productID;
	NSString* _usbSerialNumberString;
	IOUSBInterfaceStruct300* _interfaceInterfaceRef;
	unsigned char _bulkPipeIn;
	unsigned char _bulkPipeOut;
	unsigned char _interruptPipeIn;
	unsigned long _readBufferSize;
	unsigned long _writeBufferSize;
	unsigned long _eventDataBufferSize;
	char* _readBuffer;
	char* _writeBuffer;
	char* _eventDataBuffer;
	NSMutableData* _eventData;
	int _maxPacketSizeBulkIn;
	int _maxPacketSizeBulkOut;
	int _maxPacketSizeInterruptIn;
	CFRunLoopSourceRef _CFRunLoopSource;
	char _connected;

}
-(void)dealloc;
-(id)description;
-(char)sendEvent:(id)arg1 ;
-(void)stop;
-(unsigned short)cancelRequest:(id)arg1 ;
-(unsigned short)vendorID;
-(char)startInitiator;
-(int)waitForCallbackThreadConditionSignalWithTimeout:(long)arg1 ;
-(void)sendDataPackets:(id)arg1 ;
-(char)sendCancel:(id)arg1 ;
-(id)sendRequest:(id)arg1 receiveData:(id)arg2 timeout:(unsigned long)arg3 ;
-(id)sendRequest:(id)arg1 sendData:(id)arg2 timeout:(unsigned long)arg3 ;
-(void)cancelTransaction:(id)arg1 ;
-(id)initWithLocationID:(unsigned long)arg1 delegate:(id)arg2 ;
-(void)abortPendingIO;
-(unsigned short)productID;
-(id)usbSerialNumberString;
-(unsigned short)deviceStatus;
-(void)deviceReset;
-(int)readInterruptData;
-(char)writeBulkData:(id)arg1 ;
-(int)readBulkDataWithTimeout:(unsigned long)arg1 ;
-(unsigned long)locationID;
-(void)dumpData:(void*)arg1 length:(int)arg2 comment:(id)arg3 ;
-(char)handleBulkData:(unsigned long)arg1 result:(int)arg2 ;
-(void)handleInterruptData:(unsigned long)arg1 ;
-(void)clearPipeStall:(unsigned char)arg1 ;
-(void)clearBulkInPipeStall;
-(void)sendData:(id)arg1 ;
-(void)setConnected:(char)arg1 ;
-(char)connected;
@end
