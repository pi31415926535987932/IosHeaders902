/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:45:26 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreBluetooth/CBAttribute.h>

@class CBCharacteristic, CBPeripheral, NSNumber;

@interface CBDescriptor : CBAttribute {

	CBCharacteristic* _characteristic;
	id _value;
	CBPeripheral* _peripheral;
	NSNumber* _handle;

}

@property (assign,nonatomic) CBCharacteristic * characteristic;              //@synthesize characteristic=_characteristic - In the implementation block
@property (retain) id value;                                                 //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) CBPeripheral * peripheral;                    //@synthesize peripheral=_peripheral - In the implementation block
@property (nonatomic,readonly) NSNumber * handle;                            //@synthesize handle=_handle - In the implementation block
-(id)initWithCharacteristic:(id)arg1 dictionary:(id)arg2 ;
-(id)handleValueUpdated:(id)arg1 ;
-(id)handleValueWritten:(id)arg1 ;
-(NSNumber *)handle;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(id)value;
-(void)setValue:(id)arg1 ;
-(void)setCharacteristic:(CBCharacteristic *)arg1 ;
-(CBPeripheral *)peripheral;
-(CBCharacteristic *)characteristic;
@end

