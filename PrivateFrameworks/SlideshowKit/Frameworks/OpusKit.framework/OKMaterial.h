/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:39 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/OKSettingsSupport.h>

@protocol OKWidgetProtocol;
@class OKPresentationMaterial, NSString;

@interface OKMaterial : NSObject <OKSettingsSupport> {

	OKPresentationMaterial* _material;
	char _needsApplySettings;
	char _hasSettingsApplied;
	id<OKWidgetProtocol> _parentWidget;

}

@property (assign,nonatomic) id<OKWidgetProtocol> parentWidget;              //@synthesize parentWidget=_parentWidget - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
-(void)dealloc;
-(NSString *)name;
-(void)load;
-(void)unload;
-(id)settingObjectForKey:(id)arg1 ;
-(void)setUserSettingObject:(id)arg1 forKey:(id)arg2 ;
-(void)setNeedsApplySettings;
-(void)applySettingsIfNeeded;
-(void)applySettings;
-(id<OKWidgetProtocol>)parentWidget;
-(id)initWithMaterial:(id)arg1 ;
-(void)setParentWidget:(id<OKWidgetProtocol>)arg1 ;
@end

