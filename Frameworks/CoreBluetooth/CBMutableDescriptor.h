/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:45:26 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreBluetooth/CBDescriptor.h>

@class NSNumber;

@interface CBMutableDescriptor : CBDescriptor {

	NSNumber* _ID;

}

@property (retain) NSNumber * ID;              //@synthesize ID=_ID - In the implementation block
-(id)initWithCharacteristic:(id)arg1 dictionary:(id)arg2 ;
-(id)initWithType:(id)arg1 value:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(NSNumber *)ID;
-(void)setID:(NSNumber *)arg1 ;
@end

