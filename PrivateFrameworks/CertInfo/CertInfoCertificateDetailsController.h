/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:24 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CertInfo/CertInfo-Structs.h>
#import <UIKit/UITableViewController.h>

@protocol CertInfoCertificateDetailsControllerDelegate;
@class NSArray, UIBarButtonItem;

@interface CertInfoCertificateDetailsController : UITableViewController {

	id<CertInfoCertificateDetailsControllerDelegate> _delegate;
	NSArray* _sectionDictionaries;
	UIBarButtonItem* _doneButton;
	unsigned _showsDoneButton : 1;

}

@property (assign,nonatomic,__weak) id<CertInfoCertificateDetailsControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char showsDoneButton; 
-(id)initWithTrust:(SecTrustRef)arg1 ;
-(void)setDelegate:(id<CertInfoCertificateDetailsControllerDelegate>)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id<CertInfoCertificateDetailsControllerDelegate>)delegate;
-(char)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(id)initWithCertificateProperties:(id)arg1 ;
-(id)initWithTrust:(SecTrustRef)arg1 certificateIndex:(long)arg2 ;
-(id)_sectionsForProperties:(id)arg1 ;
-(id)_sectionsForProperties:(id)arg1 currentSectionDictionary:(id)arg2 ;
-(id)_propertiesForIndexPath:(id)arg1 ;
-(void)_doneButtonPressed:(id)arg1 ;
-(void)setShowsDoneButton:(char)arg1 ;
-(char)showsDoneButton;
@end

