/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:54 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class BTLEClient, NSString, NSData;

@interface BTLEClientTransaction : NSObject {

	BTLEClient* _client;
	NSString* _writeCharacteristic;
	NSData* _writeData;
	NSString* _readCharacteristic;
	NSData* _readData;
	/*^block*/id _readHandler;
	/*^block*/id _writeHandler;
	/*^block*/id _replyHandler;

}

@property (nonatomic,retain) BTLEClient * client;                       //@synthesize client=_client - In the implementation block
@property (nonatomic,copy) NSString * writeCharacteristic;              //@synthesize writeCharacteristic=_writeCharacteristic - In the implementation block
@property (nonatomic,copy) NSData * writeData;                          //@synthesize writeData=_writeData - In the implementation block
@property (nonatomic,copy) NSString * readCharacteristic;               //@synthesize readCharacteristic=_readCharacteristic - In the implementation block
@property (nonatomic,copy) NSData * readData;                           //@synthesize readData=_readData - In the implementation block
@property (nonatomic,copy) id readHandler;                              //@synthesize readHandler=_readHandler - In the implementation block
@property (nonatomic,copy) id writeHandler;                             //@synthesize writeHandler=_writeHandler - In the implementation block
@property (nonatomic,copy) id replyHandler;                             //@synthesize replyHandler=_replyHandler - In the implementation block
-(id)replyHandler;
-(void)setReadData:(NSData *)arg1 ;
-(NSData *)readData;
-(void)setWriteData:(NSData *)arg1 ;
-(void)setReplyHandler:(id)arg1 ;
-(id)readHandler;
-(void)setWriteCharacteristic:(NSString *)arg1 ;
-(id)writeHandler;
-(NSString *)readCharacteristic;
-(void)setReadCharacteristic:(NSString *)arg1 ;
-(NSString *)writeCharacteristic;
-(void)setWriteHandler:(id)arg1 ;
-(NSData *)writeData;
-(void)setReadHandler:(id)arg1 ;
-(BTLEClient *)client;
-(void)setClient:(BTLEClient *)arg1 ;
@end
