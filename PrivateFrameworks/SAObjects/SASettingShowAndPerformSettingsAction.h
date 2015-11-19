/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:23 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@interface SASettingShowAndPerformSettingsAction : SABaseClientBoundCommand

@property (nonatomic,retain) id<SASettingSettingsAction> settingsAction; 
+(id)showAndPerformSettingsAction;
+(id)showAndPerformSettingsActionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)_ad_settingsRequestRepresentation;
-(id)_ad_aceSettingsResponseCommandRepresentationForSiriResponse:(id)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(char)requiresResponse;
-(id<SASettingSettingsAction>)settingsAction;
-(void)setSettingsAction:(id<SASettingSettingsAction>)arg1 ;
@end

