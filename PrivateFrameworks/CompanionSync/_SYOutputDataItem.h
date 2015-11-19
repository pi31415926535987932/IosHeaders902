/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:39 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData;

@interface _SYOutputDataItem : NSObject {

	NSData* _data;
	unsigned _bytesSent;
	/*^block*/id _callback;

}

@property (nonatomic,copy) NSData * data;                     //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) unsigned bytesSent;              //@synthesize bytesSent=_bytesSent - In the implementation block
@property (nonatomic,copy) id callback;                       //@synthesize callback=_callback - In the implementation block
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(void)setBytesSent:(unsigned)arg1 ;
-(unsigned)bytesSent;
@end

