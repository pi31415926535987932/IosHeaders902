/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:50 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/BSSettingDescriptionProvider.h>
#import <SpringBoard/SBDeactivationSettings.h>

@protocol SBDeactivationSettings <NSObject>
@required
-(void)setFlag:(int)arg1 forDeactivationSetting:(unsigned)arg2;
-(char)boolForDeactivationSetting:(unsigned)arg1;
-(void)clearDeactivationSettings;
-(void)applyDeactivationSettings:(id)arg1;
-(int)flagForDeactivationSetting:(unsigned)arg1;
-(void)setObject:(id)arg1 forDeactivationSetting:(unsigned)arg2;
-(id)objectForDeactivationSetting:(unsigned)arg1;
-(id)copyDeactivationSettings;

@end

#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class BSMutableSettings, NSString;

@interface SBDeactivationSettings : NSObject <BSSettingDescriptionProvider, SBDeactivationSettings, NSCopying, BSDescriptionProviding> {

	BSMutableSettings* _settings;

}

@property (getter=isEmpty,nonatomic,readonly) char empty; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFlag:(int)arg1 forDeactivationSetting:(unsigned)arg2 ;
-(char)boolForDeactivationSetting:(unsigned)arg1 ;
-(void)clearDeactivationSettings;
-(void)applyDeactivationSettings:(id)arg1 ;
-(int)flagForDeactivationSetting:(unsigned)arg1 ;
-(void)setObject:(id)arg1 forDeactivationSetting:(unsigned)arg2 ;
-(id)objectForDeactivationSetting:(unsigned)arg1 ;
-(id)copyDeactivationSettings;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEmpty;
-(id)keyDescriptionForSetting:(unsigned)arg1 ;
-(id)valueDescriptionForFlag:(int)arg1 object:(id)arg2 ofSetting:(unsigned)arg3 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end

