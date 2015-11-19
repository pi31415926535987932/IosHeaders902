/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:37 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKPresentationCanvas.h>

@class NSString, NSMutableDictionary, NSMutableArray;

@interface OKPresentationPage : OKPresentationCanvas {

	NSString* _templateName;
	NSString* _internalNavigatorName;
	NSMutableDictionary* _internalSettings;
	NSMutableDictionary* _internalUserData;
	NSMutableArray* _internalWidgets;
	NSString* _navigatorName;
	NSMutableArray* _widgets;

}

@property (nonatomic,copy) NSString * navigatorName;                       //@synthesize navigatorName=_navigatorName - In the implementation block
@property (nonatomic,copy,readonly) NSMutableArray * widgets;              //@synthesize widgets=_widgets - In the implementation block
+(id)pageWithName:(id)arg1 templateName:(id)arg2 navigatorName:(id)arg3 properties:(id)arg4 settings:(id)arg5 userData:(id)arg6 widgets:(id)arg7 ;
-(void)dealloc;
-(id)init;
-(id)dictionary;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)navigator;
-(NSMutableArray *)widgets;
-(void)resolveIfNeeded;
-(id)canvasWithName:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 andName:(id)arg2 forPresentation:(id)arg3 andParent:(id)arg4 ;
-(void)setNavigatorName:(NSString *)arg1 ;
-(id)widgetWithName:(id)arg1 ;
-(NSString *)navigatorName;
-(id)parentNavigator;
-(id)pageTemplate;
@end

