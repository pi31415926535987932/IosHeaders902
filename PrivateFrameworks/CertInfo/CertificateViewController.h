/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:24 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CertInfo/CertInfo-Structs.h>
#import <UIKit/UITableViewController.h>

@class NSString, NSDate, NSArray;

@interface CertificateViewController : UITableViewController {

	char _certificateIsRoot;
	char _showCertificateButton;
	char _certificateButtonIsDestructiveAction;
	id _certificateTrust;
	int _certUIAction;
	NSString* _certificateTitle;
	NSString* _certificateIssuer;
	NSString* _certificatePurpose;
	NSDate* _certificateExpiration;
	NSArray* _certificateProperties;
	NSString* _certificateButtonTitle;
	NSString* _certificateButtonDescription;
	/*^block*/id _certificateButtonActionHandler;

}

@property (nonatomic,retain) id certificateTrust;                                    //@synthesize certificateTrust=_certificateTrust - In the implementation block
@property (assign,nonatomic) int certUIAction;                                       //@synthesize certUIAction=_certUIAction - In the implementation block
@property (nonatomic,retain) NSString * certificateTitle;                            //@synthesize certificateTitle=_certificateTitle - In the implementation block
@property (nonatomic,retain) NSString * certificateIssuer;                           //@synthesize certificateIssuer=_certificateIssuer - In the implementation block
@property (nonatomic,retain) NSString * certificatePurpose;                          //@synthesize certificatePurpose=_certificatePurpose - In the implementation block
@property (nonatomic,retain) NSDate * certificateExpiration;                         //@synthesize certificateExpiration=_certificateExpiration - In the implementation block
@property (nonatomic,retain) NSArray * certificateProperties;                        //@synthesize certificateProperties=_certificateProperties - In the implementation block
@property (assign,nonatomic) char certificateIsRoot;                                 //@synthesize certificateIsRoot=_certificateIsRoot - In the implementation block
@property (assign,nonatomic) char showCertificateButton;                             //@synthesize showCertificateButton=_showCertificateButton - In the implementation block
@property (nonatomic,retain) NSString * certificateButtonTitle;                      //@synthesize certificateButtonTitle=_certificateButtonTitle - In the implementation block
@property (nonatomic,retain) NSString * certificateButtonDescription;                //@synthesize certificateButtonDescription=_certificateButtonDescription - In the implementation block
@property (assign,nonatomic) char certificateButtonIsDestructiveAction;              //@synthesize certificateButtonIsDestructiveAction=_certificateButtonIsDestructiveAction - In the implementation block
@property (nonatomic,copy) id certificateButtonActionHandler;                        //@synthesize certificateButtonActionHandler=_certificateButtonActionHandler - In the implementation block
-(void)dealloc;
-(id)init;
-(float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(void)didReceiveMemoryWarning;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(char)arg1 ;
-(NSArray *)certificateProperties;
-(void)preferredContentSizeChanged:(id)arg1 ;
-(id)certificateTrust;
-(void)setCertificateTrust:(id)arg1 ;
-(void)setCertificateProperties:(NSArray *)arg1 ;
-(id)initWithTrust:(SecTrustRef)arg1 action:(int)arg2 ;
-(void)setCertificateTitle:(NSString *)arg1 ;
-(void)setCertificateIssuer:(NSString *)arg1 ;
-(void)setCertificatePurpose:(NSString *)arg1 ;
-(void)setCertificateExpiration:(NSDate *)arg1 ;
-(void)setCertificateIsRoot:(char)arg1 ;
-(void)setCertUIAction:(int)arg1 ;
-(void)setShowCertificateButton:(char)arg1 ;
-(void)setCertificateButtonTitle:(NSString *)arg1 ;
-(void)setCertificateButtonDescription:(NSString *)arg1 ;
-(void)setCertificateButtonActionHandler:(id)arg1 ;
-(void)setCertificateButtonIsDestructiveAction:(char)arg1 ;
-(char)showCertificateButton;
-(NSString *)certificateButtonDescription;
-(NSString *)certificateTitle;
-(NSString *)certificateIssuer;
-(char)certificateIsRoot;
-(int)certUIAction;
-(NSDate *)certificateExpiration;
-(NSString *)certificateButtonTitle;
-(char)certificateButtonIsDestructiveAction;
-(id)certificateButtonActionHandler;
-(void)setCertificateTitle:(id)arg1 issuer:(id)arg2 purpose:(id)arg3 expiration:(id)arg4 properties:(id)arg5 isRoot:(char)arg6 action:(int)arg7 ;
-(void)setShowCertificateButton:(char)arg1 localizedTitle:(id)arg2 localizedDescription:(id)arg3 destructive:(char)arg4 handler:(/*^block*/id)arg5 ;
-(NSString *)certificatePurpose;
@end

