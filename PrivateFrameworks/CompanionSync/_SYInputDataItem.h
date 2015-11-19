/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:39 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableData;

@interface _SYInputDataItem : NSObject {

	unsigned _length;
	NSMutableData* _data;
	/*^block*/id _callback;

}

@property (assign,nonatomic) unsigned length;                         //@synthesize length=_length - In the implementation block
@property (nonatomic,readonly) unsigned lengthRemaining; 
@property (nonatomic,readonly) NSMutableData * data;                  //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) id callback;                               //@synthesize callback=_callback - In the implementation block
-(id)init;
-(unsigned)length;
-(NSMutableData *)data;
-(void)setLength:(unsigned)arg1 ;
-(unsigned)lengthRemaining;
-(id)callback;
-(void)setCallback:(id)arg1 ;
@end

