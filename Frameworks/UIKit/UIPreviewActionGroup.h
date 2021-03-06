/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:35 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <UIKit/UIPreviewActionItem.h>

@class NSString, UIColor, UIImage, NSArray;

@interface UIPreviewActionGroup : NSObject <NSCopying, UIPreviewActionItem> {

	NSString* _title;
	NSString* _identifier;
	int _style;
	UIColor* _color;
	UIImage* _image;
	NSArray* _actions;

}

@property (nonatomic,copy) NSString * title;                                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) int style;                                                        //@synthesize style=_style - In the implementation block
@property (setter=_setColor:,getter=_color,nonatomic,retain) UIColor * color;                  //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                  //@synthesize image=_image - In the implementation block
@property (setter=_setActions:,getter=_actions,nonatomic,copy) NSArray * actions;              //@synthesize actions=_actions - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_actionGroupWithPreviewMenuItemWithSubactions:(id)arg1 ;
+(id)actionGroupWithTitle:(id)arg1 style:(int)arg2 actions:(id)arg3 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)title;
-(id)_actions;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIImage *)image;
-(int)style;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setStyle:(int)arg1 ;
-(void)_setColor:(id)arg1 ;
-(id)_color;
-(void)_setActions:(id)arg1 ;
@end

