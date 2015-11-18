/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:45:26 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreBluetooth/CBService.h>

@class NSNumber, NSArray;

@interface CBMutableService : CBService {

	NSNumber* _ID;

}

@property (retain) NSArray * includedServices; 
@property (retain) NSArray * characteristics; 
@property (retain) NSNumber * ID;                           //@synthesize ID=_ID - In the implementation block
-(void)handlePowerNotOn;
-(id)initWithType:(id)arg1 primary:(char)arg2 ;
-(void)dealloc;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSNumber *)ID;
-(void)setID:(NSNumber *)arg1 ;
@end
