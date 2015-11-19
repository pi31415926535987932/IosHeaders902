/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:57 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMFoundation/IMFoundation-Structs.h>
#import <IMFoundation/IMNetworkManager.h>
#import <libobjc.A.dylib/RadiosPreferencesDelegate.h>

@class NSRecursiveLock, NSMutableSet, RadiosPreferences, NSNumber;

@interface IMMobileNetworkManager : IMNetworkManager <RadiosPreferencesDelegate> {

	char _registered;
	char _shouldBringUpDataContext;
	char _dataContextActive;
	NSRecursiveLock* _lock;
	NSMutableSet* _disableFastDormancyTokens;
	NSMutableSet* _wiFiAutoAssociationTokens;
	NSMutableSet* _cellAutoAssociationTokens;
	void* _serverConnection;
	void* _suspendDormancyAssertion;
	RadiosPreferences* _radiosPreferences;
	CTServerConnectionRef _ctServerConnection;
	void* _cellAssertion;
	int _applySkipCount;

}

@property (nonatomic,readonly) char isAirplaneModeEnabled; 
@property (nonatomic,readonly) char isWiFiEnabled; 
@property (nonatomic,readonly) char isWiFiUsable; 
@property (nonatomic,readonly) char isWiFiAssociated; 
@property (nonatomic,readonly) char isWiFiCaptive; 
@property (nonatomic,readonly) char isHostingWiFiHotSpot; 
@property (nonatomic,readonly) char autoAssociateWiFi; 
@property (nonatomic,readonly) char autoAssociateCellular; 
@property (nonatomic,readonly) char disableFastDormancy; 
@property (nonatomic,readonly) char willTryToSearchForWiFiNetwork; 
@property (nonatomic,readonly) char willTryToAutoAssociateWiFiNetwork; 
@property (nonatomic,retain,readonly) NSNumber * wiFiSignalStrength; 
@property (nonatomic,retain,readonly) NSNumber * wiFiScaledRSSI; 
@property (nonatomic,retain,readonly) NSNumber * wiFiScaledRate; 
@property (nonatomic,readonly) char dataConnectionExists; 
@property (nonatomic,readonly) char has2GDataConnection; 
@property (nonatomic,readonly) char hasLTEDataConnection; 
@property (nonatomic,readonly) char isDataSwitchEnabled; 
@property (nonatomic,readonly) char isDataConnectionActive; 
@property (nonatomic,readonly) char inValidSIMState; 
@property (nonatomic,readonly) char requiresSIMInserted; 
@property (nonatomic,readonly) char isSIMLocked; 
@property (nonatomic,readonly) char isSIMRemoved; 
@property (nonatomic,retain) RadiosPreferences * _radiosPreferences;                    //@synthesize radiosPreferences=_radiosPreferences - In the implementation block
@property (assign,nonatomic) void* _cellAssertion;                                      //@synthesize cellAssertion=_cellAssertion - In the implementation block
@property (assign,nonatomic) CTServerConnectionRef _ctServerConnection;                 //@synthesize ctServerConnection=_ctServerConnection - In the implementation block
@property (assign,nonatomic) int _applySkipCount;                                       //@synthesize applySkipCount=_applySkipCount - In the implementation block
@property (assign,nonatomic) void* _serverConnection;                                   //@synthesize serverConnection=_serverConnection - In the implementation block
@property (assign,nonatomic) void* _suspendDormancyAssertion;                           //@synthesize suspendDormancyAssertion=_suspendDormancyAssertion - In the implementation block
@property (nonatomic,retain) NSRecursiveLock * lock;                                    //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) NSMutableSet * wiFiAutoAssociationTokens;                  //@synthesize wiFiAutoAssociationTokens=_wiFiAutoAssociationTokens - In the implementation block
@property (nonatomic,retain) NSMutableSet * cellularAutoAssociationTokens;              //@synthesize cellAutoAssociationTokens=_cellAutoAssociationTokens - In the implementation block
@property (nonatomic,retain) NSMutableSet * disableFastDormancyTokens;                  //@synthesize disableFastDormancyTokens=_disableFastDormancyTokens - In the implementation block
@property (assign,nonatomic) char registered;                                           //@synthesize registered=_registered - In the implementation block
@property (assign,nonatomic) char shouldBringUpDataContext;                             //@synthesize shouldBringUpDataContext=_shouldBringUpDataContext - In the implementation block
@property (assign,nonatomic) char dataContextActive;                                    //@synthesize dataContextActive=_dataContextActive - In the implementation block
-(char)isWiFiEnabled;
-(char)registered;
-(void)setRegistered:(char)arg1 ;
-(void)dealloc;
-(id)init;
-(NSRecursiveLock *)lock;
-(char)isAirplaneModeEnabled;
-(void)setDataConnectionActive:(char)arg1 ;
-(char)isDataConnectionActive;
-(void)_createCTServerConnection;
-(void)_releaseCTServerConnection;
-(void)_adjustCellularAutoAssociation;
-(void)_adjustFastDormancyTokens;
-(char)autoAssociateCellular;
-(char)disableFastDormancy;
-(void)_setFastDormancySuspended:(char)arg1 ;
-(void)__adjustFastDormancyTokens;
-(char)isHostingWiFiHotSpot;
-(char)willTryToAutoAssociateWiFiNetwork;
-(char)willTryToSearchForWiFiNetwork;
-(NSNumber *)wiFiSignalStrength;
-(NSNumber *)wiFiScaledRSSI;
-(NSNumber *)wiFiScaledRate;
-(char)isWiFiAssociated;
-(char)isWiFiCaptive;
-(char)autoAssociateWiFi;
-(void)addWiFiAutoAssociationClientToken:(id)arg1 ;
-(void)removeWiFiAutoAssociationClientToken:(id)arg1 ;
-(void)showNetworkOptions;
-(void)_adjustCelluarAutoAssociation;
-(char)isSIMLocked;
-(char)isSIMRemoved;
-(char)_isDataConnectionAvailable;
-(void)_makeDataConnectionAvailable:(char)arg1 ;
-(void)cutWiFiManagerLinkDidChange:(id)arg1 context:(id)arg2 ;
-(void)addFastDormancyDisableToken:(id)arg1 ;
-(void)removeFastDormancyDisableToken:(id)arg1 ;
-(char)isWiFiUsable;
-(void)addCellularAutoAssociationClientToken:(id)arg1 ;
-(void)removeCellularAutoAssociationClientToken:(id)arg1 ;
-(void)_ctServerCallBack:(id)arg1 object:(id)arg2 userInfo:(id)arg3 ;
-(char)requiresSIMInserted;
-(void)showSIMUnlock;
-(char)inValidSIMState;
-(char)dataConnectionExists;
-(char)has2GDataConnection;
-(char)hasLTEDataConnection;
-(char)isDataSwitchEnabled;
-(NSMutableSet *)disableFastDormancyTokens;
-(void)setDisableFastDormancyTokens:(NSMutableSet *)arg1 ;
-(NSMutableSet *)wiFiAutoAssociationTokens;
-(void)setWiFiAutoAssociationTokens:(NSMutableSet *)arg1 ;
-(NSMutableSet *)cellularAutoAssociationTokens;
-(void)setCellularAutoAssociationTokens:(NSMutableSet *)arg1 ;
-(void*)_serverConnection;
-(void)set_serverConnection:(void*)arg1 ;
-(void*)_suspendDormancyAssertion;
-(void)set_suspendDormancyAssertion:(void*)arg1 ;
-(RadiosPreferences *)_radiosPreferences;
-(void)set_radiosPreferences:(RadiosPreferences *)arg1 ;
-(CTServerConnectionRef)_ctServerConnection;
-(void)set_ctServerConnection:(CTServerConnectionRef)arg1 ;
-(void*)_cellAssertion;
-(void)set_cellAssertion:(void*)arg1 ;
-(int)_applySkipCount;
-(void)set_applySkipCount:(int)arg1 ;
-(char)shouldBringUpDataContext;
-(void)setShouldBringUpDataContext:(char)arg1 ;
-(char)dataContextActive;
-(void)setDataContextActive:(char)arg1 ;
-(void)airplaneModeChanged;
-(void)setLock:(NSRecursiveLock *)arg1 ;
@end

