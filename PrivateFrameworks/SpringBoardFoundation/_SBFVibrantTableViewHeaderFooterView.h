/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 4:59:52 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewHeaderFooterView.h>

@class _UIBackdropView, UIView, NSString;

@interface _SBFVibrantTableViewHeaderFooterView : UITableViewHeaderFooterView {

	_UIBackdropView* _backdrop;
	UIView* _plusDView;
	char _wantsPlusDLayer;
	int _graphicsQuality;
	NSString* _backdropGroupName;

}

@property (assign,nonatomic) int graphicsQuality;                     //@synthesize graphicsQuality=_graphicsQuality - In the implementation block
@property (nonatomic,copy) NSString * backdropGroupName;              //@synthesize backdropGroupName=_backdropGroupName - In the implementation block
@property (assign,nonatomic) char wantsPlusDLayer;                    //@synthesize wantsPlusDLayer=_wantsPlusDLayer - In the implementation block
+(id)defaultBackgroundColorForGraphicsQuality:(int)arg1 ;
-(void)setWantsPlusDLayer:(char)arg1 ;
-(char)wantsPlusDLayer;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(int)graphicsQuality;
-(void)setFloating:(char)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setGraphicsQuality:(int)arg1 ;
-(int)initialGraphicsQuality;
-(void)setBackdropGroupName:(NSString *)arg1 ;
-(NSString *)backdropGroupName;
@end

