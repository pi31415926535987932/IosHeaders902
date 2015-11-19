/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:54 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/AKTextAttributesUserInterfaceItem.h>

@class UIColor, AKController, AKColorPaletteView, NSString;

@interface AKColorPickerViewController : UIViewController <AKTextAttributesUserInterfaceItem> {

	UIColor* _color;
	int _colorAttributeTag;
	AKController* _controller;
	AKColorPaletteView* _colorPalette;
	int _tag;

}

@property (nonatomic,retain) UIColor * color;                                //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) int colorAttributeTag;                          //@synthesize colorAttributeTag=_colorAttributeTag - In the implementation block
@property (assign,nonatomic,__weak) AKController * controller;               //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) AKColorPaletteView * colorPalette;              //@synthesize colorPalette=_colorPalette - In the implementation block
@property (assign,nonatomic) int tag;                                        //@synthesize tag=_tag - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithController:(id)arg1 ;
-(int)tag;
-(void)setTag:(int)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(AKController *)controller;
-(void)setController:(AKController *)arg1 ;
-(void)valueChanged:(id)arg1 ;
-(int)colorAttributeTag;
-(id)convertTextAttributes:(id)arg1 ;
-(void)syncTextAttributesToUI:(id)arg1 ;
-(void)setColorAttributeTag:(int)arg1 ;
-(AKColorPaletteView *)colorPalette;
-(void)setColorPalette:(AKColorPaletteView *)arg1 ;
@end

