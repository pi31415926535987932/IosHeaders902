/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:35:37 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/MCSessionPrivateDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <UIKit/UINavigationBarDelegate.h>
#import <libobjc.A.dylib/MCNearbyServiceBrowserDelegate.h>

@protocol MCBrowserViewControllerDelegate;
@class MCNearbyServiceBrowser, MCSession, MCPeerID, UITableView, NSMutableArray, NSMutableDictionary, UIBarButtonItem, UINavigationBar, NSBundle, NSString;

@interface MCBrowserViewController : UIViewController <MCSessionPrivateDelegate, UITableViewDataSource, UITableViewDelegate, UIAlertViewDelegate, UINavigationBarDelegate, MCNearbyServiceBrowserDelegate> {

	id<MCBrowserViewControllerDelegate> _delegate;
	MCNearbyServiceBrowser* _browser;
	MCSession* _session;
	unsigned _minimumNumberOfPeers;
	unsigned _maximumNumberOfPeers;
	MCPeerID* _myPeerID;
	UITableView* _tableView;
	NSMutableArray* _nearbyPeersSection;
	NSMutableArray* _invitedPeersSection;
	NSMutableDictionary* _invitedPeersState;
	NSMutableArray* _foundPeers;
	UIBarButtonItem* _doneButton;
	UIBarButtonItem* _cancelButton;
	UINavigationBar* _navigationBar;
	NSBundle* _frameworkBundle;
	unsigned _declinedPeersCount;

}

@property (assign,nonatomic,__weak) id<MCBrowserViewControllerDelegate> delegate; 
@property (nonatomic,retain) MCNearbyServiceBrowser * browser;                                 //@synthesize browser=_browser - In the implementation block
@property (nonatomic,retain) MCSession * session;                                              //@synthesize session=_session - In the implementation block
@property (assign,nonatomic) unsigned minimumNumberOfPeers;                                    //@synthesize minimumNumberOfPeers=_minimumNumberOfPeers - In the implementation block
@property (assign,nonatomic) unsigned maximumNumberOfPeers;                                    //@synthesize maximumNumberOfPeers=_maximumNumberOfPeers - In the implementation block
@property (nonatomic,copy) MCPeerID * myPeerID;                                                //@synthesize myPeerID=_myPeerID - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                          //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSMutableArray * nearbyPeersSection;                              //@synthesize nearbyPeersSection=_nearbyPeersSection - In the implementation block
@property (nonatomic,retain) NSMutableArray * invitedPeersSection;                             //@synthesize invitedPeersSection=_invitedPeersSection - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * invitedPeersState;                          //@synthesize invitedPeersState=_invitedPeersState - In the implementation block
@property (nonatomic,retain) NSMutableArray * foundPeers;                                      //@synthesize foundPeers=_foundPeers - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * doneButton;                                     //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * cancelButton;                                   //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UINavigationBar * navigationBar;                                  //@synthesize navigationBar=_navigationBar - In the implementation block
@property (nonatomic,retain) NSBundle * frameworkBundle;                                       //@synthesize frameworkBundle=_frameworkBundle - In the implementation block
@property (assign,nonatomic) unsigned declinedPeersCount;                                      //@synthesize declinedPeersCount=_declinedPeersCount - In the implementation block
@property (nonatomic,readonly) char maximumNumberOfPeersReached; 
@property (nonatomic,readonly) char minimumNumberOfPeersReached; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MCPeerID *)myPeerID;
-(void)session:(id)arg1 didFinishReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 atURL:(id)arg4 withError:(id)arg5 propagate:(char*)arg6 ;
-(void)session:(id)arg1 peer:(id)arg2 didChangeState:(int)arg3 propagate:(char*)arg4 ;
-(void)session:(id)arg1 didReceiveData:(id)arg2 fromPeer:(id)arg3 propagate:(char*)arg4 ;
-(void)session:(id)arg1 didStartReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 withProgress:(id)arg4 propagate:(char*)arg5 ;
-(void)session:(id)arg1 didReceiveStream:(id)arg2 withName:(id)arg3 fromPeer:(id)arg4 propagate:(char*)arg5 ;
-(id)initWithBrowser:(id)arg1 session:(id)arg2 ;
-(unsigned)minimumNumberOfPeers;
-(unsigned)maximumNumberOfPeers;
-(NSMutableArray *)nearbyPeersSection;
-(NSMutableArray *)invitedPeersSection;
-(NSMutableDictionary *)invitedPeersState;
-(NSMutableArray *)foundPeers;
-(void)setDeclinedPeersCount:(unsigned)arg1 ;
-(void)peer:(id)arg1 changedStateTo:(int)arg2 ;
-(unsigned)declinedPeersCount;
-(void)peerJoinedSession;
-(char)minimumNumberOfPeersReached;
-(char)maximumNumberOfPeersReached;
-(id)nearbySectionTitle;
-(id)detailStringForPeerState:(int)arg1 ;
-(void)verifyPeerIsAccountedFor:(id)arg1 ;
-(void)browser:(id)arg1 foundPeer:(id)arg2 withDiscoveryInfo:(id)arg3 ;
-(void)browser:(id)arg1 lostPeer:(id)arg2 ;
-(id)initWithServiceType:(id)arg1 session:(id)arg2 ;
-(void)setMinimumNumberOfPeers:(unsigned)arg1 ;
-(void)setMaximumNumberOfPeers:(unsigned)arg1 ;
-(void)cancelTapped:(id)arg1 ;
-(void)setMyPeerID:(MCPeerID *)arg1 ;
-(void)setNearbyPeersSection:(NSMutableArray *)arg1 ;
-(void)setInvitedPeersSection:(NSMutableArray *)arg1 ;
-(void)setInvitedPeersState:(NSMutableDictionary *)arg1 ;
-(void)setFoundPeers:(NSMutableArray *)arg1 ;
-(NSBundle *)frameworkBundle;
-(void)setFrameworkBundle:(NSBundle *)arg1 ;
-(void)doneTapped:(id)arg1 ;
-(MCSession *)session;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<MCBrowserViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(char)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(NSString *)description;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id<MCBrowserViewControllerDelegate>)delegate;
-(UINavigationBar *)navigationBar;
-(void)didReceiveMemoryWarning;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setNavigationBar:(UINavigationBar *)arg1 ;
-(int)positionForBar:(id)arg1 ;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(UIBarButtonItem *)cancelButton;
-(void)setCancelButton:(UIBarButtonItem *)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(char)arg1 ;
-(void)setDoneButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)doneButton;
-(void)setSession:(MCSession *)arg1 ;
-(MCNearbyServiceBrowser *)browser;
-(void)setBrowser:(MCNearbyServiceBrowser *)arg1 ;
@end

