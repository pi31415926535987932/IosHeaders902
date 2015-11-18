/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:44:51 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreAudioKit/CoreAudioKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITextFieldDelegate.h>

@class AMSBTLEAdvertisementManager, NSString, UITextField, UIActivityIndicatorView, NSTimer;

@interface CABTMIDILocalPeripheralViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate> {

	AMSBTLEAdvertisementManager* advertisingManager;
	NSString* statusString;
	UITextField* serviceNameField;
	char advertising;
	char isErrorMessage;
	UIActivityIndicatorView* indicator;
	NSString* theServiceName;
	int advertiseTimeout;
	NSTimer* advertiseTimer;
	NSTimer* messageTimer;
	char didCleanup;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didChangePreferredContentSize:(id)arg1 ;
-(id)advertisedServiceName;
-(void)advertiseTimerFired:(id)arg1 ;
-(void)updateAdvertiseUI;
-(void)activateController:(id)arg1 ;
-(void)deactivateController:(id)arg1 ;
-(char)advertiseServiceWithName:(id)arg1 completionBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(char)stopAdvertisingServiceWithCompletionBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(void)setStatusString:(id)arg1 animateIndicator:(char)arg2 isError:(char)arg3 ;
-(void)textFieldDone:(id)arg1 ;
-(void)advertiseServiceSwitchToggled:(id)arg1 ;
-(char)changeServiceNameTo:(id)arg1 completionBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(void)messageTimerFired:(id)arg1 ;
-(char)disconnectLocalPeripheral;
-(void)dealloc;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(void)didReceiveMemoryWarning;
-(id)title;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(void)viewDidLoad;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)cleanup;
-(void)stopTimers;
-(id)statusString;
@end

