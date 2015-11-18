/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:32 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UIPrinterPickerControllerDelegate;
#import <UIKit/UIKit-Structs.h>
@class UIPrinter;

@interface UIPrinterPickerController : NSObject {

	/*^block*/id _completionHandler;
	id _state;
	UIPrinter* _selectedPrinter;
	id<UIPrinterPickerControllerDelegate> _delegate;

}

@property (nonatomic,retain) UIPrinter * selectedPrinter;                                        //@synthesize selectedPrinter=_selectedPrinter - In the implementation block
@property (assign,nonatomic,__weak) id<UIPrinterPickerControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)printerPickerControllerWithInitiallySelectedPrinter:(id)arg1 ;
-(void)setDelegate:(id<UIPrinterPickerControllerDelegate>)arg1 ;
-(id)init;
-(id<UIPrinterPickerControllerDelegate>)delegate;
-(id)_init;
-(void)_printerPickerDidPresent;
-(void)_printerPickerWillDismiss;
-(void)_printerPickerDidDismiss;
-(void)dismissAnimated:(char)arg1 ;
-(char)_delegateFiltersPrinters;
-(char)_shouldShowPrinter:(id)arg1 ;
-(void)setSelectedPrinter:(UIPrinter *)arg1 ;
-(char)presentFromRect:(CGRect)arg1 inView:(id)arg2 animated:(char)arg3 completionHandler:(/*^block*/id)arg4 ;
-(char)_setupPickerPanel:(/*^block*/id)arg1 ;
-(char)presentAnimated:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(UIPrinter *)selectedPrinter;
-(char)presentFromBarButtonItem:(id)arg1 animated:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

