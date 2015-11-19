/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:07 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BatteryCenter.framework/BatteryCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <BatteryCenter/BatteryCenter-Structs.h>
@class NSArray, NSMutableDictionary, NSMapTable, NSString;

@interface BCBatteryDeviceController : NSObject {

	NSArray* _orderedFirstPartyAccessoryIdentifiers;
	NSMutableDictionary* _devicesByIdentifier;
	NSArray* _sortedDevices;
	CFRunLoopSourceRef _powerSourcesChangedRunLoopSource;
	CFRunLoopSourceRef _accessoriesChangedRunLoopSource;
	CFRunLoopSourceRef _accessoriesLimitedPowerRunLoopSource;
	NSMapTable* _handlersByIdentifier;
	char _chargeChangeHandlingDisabled;
	char _didLoadAllowAllDevicesDefault;
	CGSize _largestBatteryDeviceGlyphSize;

}

@property (nonatomic,readonly) NSString * connectedDevicesDidChangeNotificationName; 
@property (nonatomic,readonly) NSArray * connectedDevices; 
@property (nonatomic,readonly) NSArray * connectedDevicesIncludingMissingParts; 
+(id)sharedInstance;
+(id)_internalBatteryDeviceGlyph;
+(id)_glyphForFirstPartyBatteryDeviceWithBaseIdentifier:(id)arg1 ;
+(id)_glyphsForFirstPartyBatteryDevice:(id)arg1 ;
+(id)_identifierForBatteryDevice:(id)arg1 ;
+(id)_glyphsForBatteryDevice:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)_handlePSChange;
-(void)_reenableChargeChangeHandling;
-(id)_orderedFirstPartyAccessoryIdentifiers;
-(void)_invalidateConnectedDevices;
-(id)_displayNameForBaseIdentifier:(id)arg1 andParts:(unsigned)arg2 fromPowerSourceDescription:(id)arg3 ;
-(void)_performUpdateWithPowerSourcesBlob:(void*)arg1 andPowerSourcesList:(CFArrayRef)arg2 completion:(/*^block*/id)arg3 ;
-(char)_isDevicePartOfPairWithBaseIdentifier:(id)arg1 matchIdentifier:(id)arg2 andParts:(unsigned)arg3 ;
-(char)_shouldConsiderDeviceWithPowerSourceDescription:(id)arg1 ;
-(int)_vendorFromPowerSourceDescription:(id)arg1 ;
-(int)_productIdentifierFromPowerSourceDescription:(id)arg1 ;
-(id)_baseIdentifierFromPowerSourceDescription:(id)arg1 ;
-(unsigned)_partsFromPowerSourceDescription:(id)arg1 ;
-(id)_matchIdentifierFromPowerSourceDescription:(id)arg1 ;
-(int)_powerSourceStateFromPowerSourceDescription:(id)arg1 ;
-(id)_batteryDeviceWithIdentifier:(id)arg1 ;
-(char)_isApprovedAccessoryBaseIdentifier:(id)arg1 ;
-(void)_setBatteryDevice:(id)arg1 forIdentifier:(id)arg2 ;
-(void)_removeBatteryDevicesWithIdentifiers:(id)arg1 ;
-(int)_transportTypeFromPowerSourceDescription:(id)arg1 ;
-(int)_displayChargePercentForCurrentCapacity:(id)arg1 andMaxCapacity:(id)arg2 updateZeroValue:(char)arg3 ;
-(char)_displayIsChargingFromPowerSourceDescription:(id)arg1 ;
-(void)_callHandlersForDevice:(id)arg1 ;
-(char)_shouldCoalesceDevices:(id)arg1 minimumPercentCharge:(int*)arg2 ;
-(id)_deviceByCoalescingDevice:(id)arg1 ;
-(char)_isCompositeIdentifierValidForDeviceWithBaseIdentifier:(id)arg1 ;
-(NSString *)connectedDevicesDidChangeNotificationName;
-(id)_remainingPartsOfDeviceWithPart:(id)arg1 ;
-(NSArray *)connectedDevicesIncludingMissingParts;
-(void)addDeviceChangeHandler:(/*^block*/id)arg1 withIdentifier:(id)arg2 ;
-(void)removeDeviceChangeHandlerWithIdentifier:(id)arg1 ;
-(CGSize)_largestBatteryDeviceGlyphSize;
-(void)_incrementPercentChargeForConnectedDevices:(char)arg1 ;
-(NSArray *)connectedDevices;
@end

