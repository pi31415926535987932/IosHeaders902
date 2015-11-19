/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:47 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AXHearingSupport/AXHearingSupport-Structs.h>
@class NSMutableData;

@interface AXHAPacket : NSObject {

	unsigned _totalLength;
	NSMutableData* _data;

}

@property (nonatomic,retain) NSMutableData * data;              //@synthesize data=_data - In the implementation block
+(id)packetDataWithPayload:(id)arg1 ;
+(SCD_Struct_AX2)headerFromData:(id)arg1 ;
+(id)packetWithHeader:(SCD_Struct_AX2)arg1 ;
-(void)dealloc;
-(NSMutableData *)data;
-(void)setData:(NSMutableData *)arg1 ;
-(id)appendData:(id)arg1 ;
-(id)objectPayload;
-(unsigned)missingLength;
-(id)initWithHeader:(SCD_Struct_AX2)arg1 ;
-(id)dataPayload;
@end

