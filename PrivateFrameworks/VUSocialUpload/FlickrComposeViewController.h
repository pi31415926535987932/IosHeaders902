/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:19 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VUSocialUpload.framework/VUSocialUpload
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Social/SLComposeServiceViewController.h>
#import <libobjc.A.dylib/FlickrComposeOptionViewDelegate.h>

@class FlickrUploadSession, UIImageView, SLComposeSheetConfigurationItem, FlickrPhotoSetController, NSString, FlickrPhotoSetManager, FlickrAudienceController, ACAccountStore, ACAccount;

@interface FlickrComposeViewController : SLComposeServiceViewController <FlickrComposeOptionViewDelegate> {

	FlickrUploadSession* _session;
	UIImageView* _logoView;
	char _hasFlickrAccount;
	SLComposeSheetConfigurationItem* _photoSetConfigurationItem;
	FlickrPhotoSetController* _photoSetController;
	NSString* _photoSetTitle;
	long long _photoSetID;
	FlickrPhotoSetManager* _manager;
	SLComposeSheetConfigurationItem* _audienceConfigurationItem;
	FlickrAudienceController* _audienceController;
	int _audience;
	ACAccountStore* _accountStore;
	ACAccount* _flickrAccount;

}

@property (nonatomic,retain) ACAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,retain) ACAccount * flickrAccount;                  //@synthesize flickrAccount=_flickrAccount - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(ACAccountStore *)accountStore;
-(void)didSelectPost;
-(id)configurationItems;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)setFlickrAccount:(ACAccount *)arg1 ;
-(unsigned)postVisibility;
-(ACAccount *)flickrAccount;
-(void)flickrComposeOptionView:(id)arg1 didFinishWithSelection:(id)arg2 ;
@end

