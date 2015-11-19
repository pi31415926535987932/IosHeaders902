/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:33 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPAssetUploadTokenRetrieveRequest, CKDPDeleteCommentRequest, CKDPDeleteContainerRequest, CKDPGetCommentRequest, CKDPGetCommentsRequest, CKDPGetLikesRequest, CKDPRequestOperationHeader, CKDPLikeRequest, CKDPMescalCertificateRequest, CKDPMescalSessionInfoRequest, CKDPMescalSignatureRequest, CKDPNotificationMarkReadRequest, CKDPNotificationSyncRequest, CKDPPkiRegisterRequest, CKDPPkiRetrieveRequest, CKDPPostCommentRequest, CKDPPromoteContainerSchemaRequest, CKDPPulseRequest, CKDPQueryRetrieveRequest, CKDPRecordDeleteRequest, CKDPRecordRetrieveChangesRequest, CKDPRecordRetrieveRequest, CKDPRecordRetrieveVersionsRequest, CKDPRecordSaveRequest, CKDPOperation, CKDPResetContainerRequest, CKDPSetBadgeCountRequest, CKDPShareAcceptRequest, CKDPShareDeleteRequest, CKDPShareRetrieveRequest, CKDPShareSaveRequest, CKDPShareTokenDeleteRequest, CKDPShareTokenRetrieveRequest, CKDPShareTokenSaveRequest, CKDPSubscriptionCreateRequest, CKDPSubscriptionDeleteRequest, CKDPSubscriptionRetrieveRequest, CKDPTokenRegistrationRequest, CKDPTokenUnregistrationRequest, CKDPUnlikeRequest, CKDPUserAvailableQuotaRequest, CKDPUserPrivacySettingsBatchLookupRequest, CKDPUserPrivacySettingsResetRequest, CKDPUserPrivacySettingsRetrieveRequest, CKDPUserPrivacySettingsUpdateRequest, CKDPUserQueryRequest, CKDPUserRetrieveRequest, CKDPWebAuthTokenRetrieveRequest, CKDPZoneDeleteRequest, CKDPZoneRetrieveChangesRequest, CKDPZoneRetrieveRequest, CKDPZoneSaveRequest;

@interface CKDPRequestOperation : PBCodable <NSCopying> {

	CKDPAssetUploadTokenRetrieveRequest* _assetUploadTokenRetrieveRequest;
	CKDPDeleteCommentRequest* _deleteCommentRequest;
	CKDPDeleteContainerRequest* _deleteContainerRequest;
	CKDPGetCommentRequest* _getCommentRequest;
	CKDPGetCommentsRequest* _getCommentsRequest;
	CKDPGetLikesRequest* _getLikesRequest;
	CKDPRequestOperationHeader* _header;
	CKDPLikeRequest* _likeRequest;
	CKDPMescalCertificateRequest* _mescalCertificateRequest;
	CKDPMescalSessionInfoRequest* _mescalSessionInfoRequest;
	CKDPMescalSignatureRequest* _mescalSignatureRequest;
	CKDPNotificationMarkReadRequest* _notificationMarkReadRequest;
	CKDPNotificationSyncRequest* _notificationSyncRequest;
	CKDPPkiRegisterRequest* _pkiRegisterRequest;
	CKDPPkiRetrieveRequest* _pkiRetrieveRequest;
	CKDPPostCommentRequest* _postCommentRequest;
	CKDPPromoteContainerSchemaRequest* _promoteContainerSchemaRequest;
	CKDPPulseRequest* _pulseRequest;
	CKDPQueryRetrieveRequest* _queryRetrieveRequest;
	CKDPRecordDeleteRequest* _recordDeleteRequest;
	CKDPRecordRetrieveChangesRequest* _recordRetrieveChangesRequest;
	CKDPRecordRetrieveRequest* _recordRetrieveRequest;
	CKDPRecordRetrieveVersionsRequest* _recordRetrieveVersionsRequest;
	CKDPRecordSaveRequest* _recordSaveRequest;
	CKDPOperation* _request;
	CKDPResetContainerRequest* _resetContainerRequest;
	CKDPSetBadgeCountRequest* _setBadgeCountRequest;
	CKDPShareAcceptRequest* _shareAcceptRequest;
	CKDPShareDeleteRequest* _shareDeleteRequest;
	CKDPShareRetrieveRequest* _shareRetrieveRequest;
	CKDPShareSaveRequest* _shareSaveRequest;
	CKDPShareTokenDeleteRequest* _shareTokenDeleteRequest;
	CKDPShareTokenRetrieveRequest* _shareTokenRetrieveRequest;
	CKDPShareTokenSaveRequest* _shareTokenSaveRequest;
	CKDPSubscriptionCreateRequest* _subscriptionCreateRequest;
	CKDPSubscriptionDeleteRequest* _subscriptionDeleteRequest;
	CKDPSubscriptionRetrieveRequest* _subscriptionRetrieveRequest;
	CKDPTokenRegistrationRequest* _tokenRegistrationRequest;
	CKDPTokenUnregistrationRequest* _tokenUnregistrationRequest;
	CKDPUnlikeRequest* _unlikeRequest;
	CKDPUserAvailableQuotaRequest* _userAvailableQuotaRequest;
	CKDPUserPrivacySettingsBatchLookupRequest* _userPrivacySettingsBatchLookupRequest;
	CKDPUserPrivacySettingsResetRequest* _userPrivacySettingsResetRequest;
	CKDPUserPrivacySettingsRetrieveRequest* _userPrivacySettingsRetrieveRequest;
	CKDPUserPrivacySettingsUpdateRequest* _userPrivacySettingsUpdateRequest;
	CKDPUserQueryRequest* _userQueryRequest;
	CKDPUserRetrieveRequest* _userRetrieveRequest;
	CKDPWebAuthTokenRetrieveRequest* _webAuthTokenRetrieveRequest;
	CKDPZoneDeleteRequest* _zoneDeleteRequest;
	CKDPZoneRetrieveChangesRequest* _zoneRetrieveChangesRequest;
	CKDPZoneRetrieveRequest* _zoneRetrieveRequest;
	CKDPZoneSaveRequest* _zoneSaveRequest;

}

@property (nonatomic,readonly) char hasShareSaveRequest; 
@property (nonatomic,retain) CKDPShareSaveRequest * shareSaveRequest; 
@property (nonatomic,readonly) char hasShareRetrieveRequest; 
@property (nonatomic,retain) CKDPShareRetrieveRequest * shareRetrieveRequest; 
@property (nonatomic,readonly) char hasShareDeleteRequest; 
@property (nonatomic,retain) CKDPShareDeleteRequest * shareDeleteRequest; 
@property (nonatomic,readonly) char hasShareAcceptRequest; 
@property (nonatomic,retain) CKDPShareAcceptRequest * shareAcceptRequest; 
@property (nonatomic,readonly) char hasShareTokenSaveRequest; 
@property (nonatomic,retain) CKDPShareTokenSaveRequest * shareTokenSaveRequest; 
@property (nonatomic,readonly) char hasShareTokenRetrieveRequest; 
@property (nonatomic,retain) CKDPShareTokenRetrieveRequest * shareTokenRetrieveRequest; 
@property (nonatomic,readonly) char hasShareTokenDeleteRequest; 
@property (nonatomic,retain) CKDPShareTokenDeleteRequest * shareTokenDeleteRequest; 
@property (nonatomic,readonly) char hasZoneSaveRequest; 
@property (nonatomic,retain) CKDPZoneSaveRequest * zoneSaveRequest; 
@property (nonatomic,readonly) char hasZoneRetrieveRequest; 
@property (nonatomic,retain) CKDPZoneRetrieveRequest * zoneRetrieveRequest; 
@property (nonatomic,readonly) char hasZoneDeleteRequest; 
@property (nonatomic,retain) CKDPZoneDeleteRequest * zoneDeleteRequest; 
@property (nonatomic,readonly) char hasZoneRetrieveChangesRequest; 
@property (nonatomic,retain) CKDPZoneRetrieveChangesRequest * zoneRetrieveChangesRequest; 
@property (nonatomic,readonly) char hasRecordSaveRequest; 
@property (nonatomic,retain) CKDPRecordSaveRequest * recordSaveRequest; 
@property (nonatomic,readonly) char hasRecordRetrieveRequest; 
@property (nonatomic,retain) CKDPRecordRetrieveRequest * recordRetrieveRequest; 
@property (nonatomic,readonly) char hasRecordRetrieveVersionsRequest; 
@property (nonatomic,retain) CKDPRecordRetrieveVersionsRequest * recordRetrieveVersionsRequest; 
@property (nonatomic,readonly) char hasRecordRetrieveChangesRequest; 
@property (nonatomic,retain) CKDPRecordRetrieveChangesRequest * recordRetrieveChangesRequest; 
@property (nonatomic,readonly) char hasRecordDeleteRequest; 
@property (nonatomic,retain) CKDPRecordDeleteRequest * recordDeleteRequest; 
@property (nonatomic,readonly) char hasUserAvailableQuotaRequest; 
@property (nonatomic,retain) CKDPUserAvailableQuotaRequest * userAvailableQuotaRequest; 
@property (nonatomic,readonly) char hasUserRetrieveRequest; 
@property (nonatomic,retain) CKDPUserRetrieveRequest * userRetrieveRequest; 
@property (nonatomic,readonly) char hasQueryRetrieveRequest; 
@property (nonatomic,retain) CKDPQueryRetrieveRequest * queryRetrieveRequest; 
@property (nonatomic,readonly) char hasAssetUploadTokenRetrieveRequest; 
@property (nonatomic,retain) CKDPAssetUploadTokenRetrieveRequest * assetUploadTokenRetrieveRequest; 
@property (nonatomic,readonly) char hasDeleteContainerRequest; 
@property (nonatomic,retain) CKDPDeleteContainerRequest * deleteContainerRequest; 
@property (nonatomic,readonly) char hasResetContainerRequest; 
@property (nonatomic,retain) CKDPResetContainerRequest * resetContainerRequest; 
@property (nonatomic,readonly) char hasPromoteContainerSchemaRequest; 
@property (nonatomic,retain) CKDPPromoteContainerSchemaRequest * promoteContainerSchemaRequest; 
@property (nonatomic,readonly) char hasWebAuthTokenRetrieveRequest; 
@property (nonatomic,retain) CKDPWebAuthTokenRetrieveRequest * webAuthTokenRetrieveRequest; 
@property (nonatomic,readonly) char hasPostCommentRequest; 
@property (nonatomic,retain) CKDPPostCommentRequest * postCommentRequest; 
@property (nonatomic,readonly) char hasGetCommentsRequest; 
@property (nonatomic,retain) CKDPGetCommentsRequest * getCommentsRequest; 
@property (nonatomic,readonly) char hasGetCommentRequest; 
@property (nonatomic,retain) CKDPGetCommentRequest * getCommentRequest; 
@property (nonatomic,readonly) char hasDeleteCommentRequest; 
@property (nonatomic,retain) CKDPDeleteCommentRequest * deleteCommentRequest; 
@property (nonatomic,readonly) char hasLikeRequest; 
@property (nonatomic,retain) CKDPLikeRequest * likeRequest; 
@property (nonatomic,readonly) char hasUnlikeRequest; 
@property (nonatomic,retain) CKDPUnlikeRequest * unlikeRequest; 
@property (nonatomic,readonly) char hasGetLikesRequest; 
@property (nonatomic,retain) CKDPGetLikesRequest * getLikesRequest; 
@property (nonatomic,readonly) char hasPulseRequest; 
@property (nonatomic,retain) CKDPPulseRequest * pulseRequest; 
@property (nonatomic,readonly) char hasSubscriptionCreateRequest; 
@property (nonatomic,retain) CKDPSubscriptionCreateRequest * subscriptionCreateRequest; 
@property (nonatomic,readonly) char hasSubscriptionRetrieveRequest; 
@property (nonatomic,retain) CKDPSubscriptionRetrieveRequest * subscriptionRetrieveRequest; 
@property (nonatomic,readonly) char hasSubscriptionDeleteRequest; 
@property (nonatomic,retain) CKDPSubscriptionDeleteRequest * subscriptionDeleteRequest; 
@property (nonatomic,readonly) char hasUserQueryRequest; 
@property (nonatomic,retain) CKDPUserQueryRequest * userQueryRequest; 
@property (nonatomic,readonly) char hasUserPrivacySettingsUpdateRequest; 
@property (nonatomic,retain) CKDPUserPrivacySettingsUpdateRequest * userPrivacySettingsUpdateRequest; 
@property (nonatomic,readonly) char hasUserPrivacySettingsResetRequest; 
@property (nonatomic,retain) CKDPUserPrivacySettingsResetRequest * userPrivacySettingsResetRequest; 
@property (nonatomic,readonly) char hasUserPrivacySettingsBatchLookupRequest; 
@property (nonatomic,retain) CKDPUserPrivacySettingsBatchLookupRequest * userPrivacySettingsBatchLookupRequest; 
@property (nonatomic,readonly) char hasUserPrivacySettingsRetrieveRequest; 
@property (nonatomic,retain) CKDPUserPrivacySettingsRetrieveRequest * userPrivacySettingsRetrieveRequest; 
@property (nonatomic,readonly) char hasTokenRegistrationRequest; 
@property (nonatomic,retain) CKDPTokenRegistrationRequest * tokenRegistrationRequest; 
@property (nonatomic,readonly) char hasTokenUnregistrationRequest; 
@property (nonatomic,retain) CKDPTokenUnregistrationRequest * tokenUnregistrationRequest; 
@property (nonatomic,readonly) char hasSetBadgeCountRequest; 
@property (nonatomic,retain) CKDPSetBadgeCountRequest * setBadgeCountRequest; 
@property (nonatomic,readonly) char hasNotificationSyncRequest; 
@property (nonatomic,retain) CKDPNotificationSyncRequest * notificationSyncRequest; 
@property (nonatomic,readonly) char hasNotificationMarkReadRequest; 
@property (nonatomic,retain) CKDPNotificationMarkReadRequest * notificationMarkReadRequest; 
@property (nonatomic,readonly) char hasPkiRegisterRequest; 
@property (nonatomic,retain) CKDPPkiRegisterRequest * pkiRegisterRequest; 
@property (nonatomic,readonly) char hasPkiRetrieveRequest; 
@property (nonatomic,retain) CKDPPkiRetrieveRequest * pkiRetrieveRequest; 
@property (nonatomic,readonly) char hasMescalSignatureRequest; 
@property (nonatomic,retain) CKDPMescalSignatureRequest * mescalSignatureRequest; 
@property (nonatomic,readonly) char hasMescalSessionInfoRequest; 
@property (nonatomic,retain) CKDPMescalSessionInfoRequest * mescalSessionInfoRequest; 
@property (nonatomic,readonly) char hasMescalCertificateRequest; 
@property (nonatomic,retain) CKDPMescalCertificateRequest * mescalCertificateRequest; 
@property (nonatomic,readonly) char hasHeader; 
@property (nonatomic,retain) CKDPRequestOperationHeader * header;                                                            //@synthesize header=_header - In the implementation block
@property (nonatomic,readonly) char hasRequest; 
@property (nonatomic,retain) CKDPOperation * request;                                                                        //@synthesize request=_request - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(CKDPOperation *)request;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setMescalSignatureRequest:(CKDPMescalSignatureRequest *)arg1 ;
-(CKDPMescalSignatureRequest *)mescalSignatureRequest;
-(void)setQueryRetrieveRequest:(CKDPQueryRetrieveRequest *)arg1 ;
-(CKDPQueryRetrieveRequest *)queryRetrieveRequest;
-(void)setShareRetrieveRequest:(CKDPShareRetrieveRequest *)arg1 ;
-(CKDPShareRetrieveRequest *)shareRetrieveRequest;
-(char)hasMescalSignatureRequest;
-(void)setZoneSaveRequest:(CKDPZoneSaveRequest *)arg1 ;
-(void)setZoneRetrieveRequest:(CKDPZoneRetrieveRequest *)arg1 ;
-(void)setZoneDeleteRequest:(CKDPZoneDeleteRequest *)arg1 ;
-(void)setZoneRetrieveChangesRequest:(CKDPZoneRetrieveChangesRequest *)arg1 ;
-(void)setRecordSaveRequest:(CKDPRecordSaveRequest *)arg1 ;
-(void)setRecordRetrieveRequest:(CKDPRecordRetrieveRequest *)arg1 ;
-(void)setRecordRetrieveVersionsRequest:(CKDPRecordRetrieveVersionsRequest *)arg1 ;
-(void)setRecordRetrieveChangesRequest:(CKDPRecordRetrieveChangesRequest *)arg1 ;
-(void)setRecordDeleteRequest:(CKDPRecordDeleteRequest *)arg1 ;
-(void)setAssetUploadTokenRetrieveRequest:(CKDPAssetUploadTokenRetrieveRequest *)arg1 ;
-(void)setDeleteContainerRequest:(CKDPDeleteContainerRequest *)arg1 ;
-(void)setResetContainerRequest:(CKDPResetContainerRequest *)arg1 ;
-(void)setPromoteContainerSchemaRequest:(CKDPPromoteContainerSchemaRequest *)arg1 ;
-(void)setUserAvailableQuotaRequest:(CKDPUserAvailableQuotaRequest *)arg1 ;
-(void)setWebAuthTokenRetrieveRequest:(CKDPWebAuthTokenRetrieveRequest *)arg1 ;
-(void)setSubscriptionCreateRequest:(CKDPSubscriptionCreateRequest *)arg1 ;
-(void)setSubscriptionRetrieveRequest:(CKDPSubscriptionRetrieveRequest *)arg1 ;
-(void)setSubscriptionDeleteRequest:(CKDPSubscriptionDeleteRequest *)arg1 ;
-(void)setUserRetrieveRequest:(CKDPUserRetrieveRequest *)arg1 ;
-(void)setUserQueryRequest:(CKDPUserQueryRequest *)arg1 ;
-(void)setUserPrivacySettingsRetrieveRequest:(CKDPUserPrivacySettingsRetrieveRequest *)arg1 ;
-(void)setUserPrivacySettingsUpdateRequest:(CKDPUserPrivacySettingsUpdateRequest *)arg1 ;
-(void)setUserPrivacySettingsResetRequest:(CKDPUserPrivacySettingsResetRequest *)arg1 ;
-(void)setUserPrivacySettingsBatchLookupRequest:(CKDPUserPrivacySettingsBatchLookupRequest *)arg1 ;
-(void)setShareSaveRequest:(CKDPShareSaveRequest *)arg1 ;
-(void)setShareDeleteRequest:(CKDPShareDeleteRequest *)arg1 ;
-(void)setShareAcceptRequest:(CKDPShareAcceptRequest *)arg1 ;
-(void)setShareTokenSaveRequest:(CKDPShareTokenSaveRequest *)arg1 ;
-(void)setShareTokenRetrieveRequest:(CKDPShareTokenRetrieveRequest *)arg1 ;
-(void)setShareTokenDeleteRequest:(CKDPShareTokenDeleteRequest *)arg1 ;
-(void)setPostCommentRequest:(CKDPPostCommentRequest *)arg1 ;
-(void)setGetCommentsRequest:(CKDPGetCommentsRequest *)arg1 ;
-(void)setDeleteCommentRequest:(CKDPDeleteCommentRequest *)arg1 ;
-(void)setLikeRequest:(CKDPLikeRequest *)arg1 ;
-(void)setUnlikeRequest:(CKDPUnlikeRequest *)arg1 ;
-(void)setGetLikesRequest:(CKDPGetLikesRequest *)arg1 ;
-(void)setGetCommentRequest:(CKDPGetCommentRequest *)arg1 ;
-(void)setPulseRequest:(CKDPPulseRequest *)arg1 ;
-(void)setTokenRegistrationRequest:(CKDPTokenRegistrationRequest *)arg1 ;
-(void)setTokenUnregistrationRequest:(CKDPTokenUnregistrationRequest *)arg1 ;
-(void)setSetBadgeCountRequest:(CKDPSetBadgeCountRequest *)arg1 ;
-(void)setNotificationSyncRequest:(CKDPNotificationSyncRequest *)arg1 ;
-(void)setNotificationMarkReadRequest:(CKDPNotificationMarkReadRequest *)arg1 ;
-(void)setPkiRegisterRequest:(CKDPPkiRegisterRequest *)arg1 ;
-(void)setPkiRetrieveRequest:(CKDPPkiRetrieveRequest *)arg1 ;
-(void)setMescalSessionInfoRequest:(CKDPMescalSessionInfoRequest *)arg1 ;
-(void)setMescalCertificateRequest:(CKDPMescalCertificateRequest *)arg1 ;
-(char)hasShareSaveRequest;
-(CKDPShareSaveRequest *)shareSaveRequest;
-(char)hasShareRetrieveRequest;
-(char)hasShareDeleteRequest;
-(CKDPShareDeleteRequest *)shareDeleteRequest;
-(char)hasShareAcceptRequest;
-(CKDPShareAcceptRequest *)shareAcceptRequest;
-(char)hasShareTokenSaveRequest;
-(CKDPShareTokenSaveRequest *)shareTokenSaveRequest;
-(char)hasShareTokenRetrieveRequest;
-(CKDPShareTokenRetrieveRequest *)shareTokenRetrieveRequest;
-(char)hasShareTokenDeleteRequest;
-(CKDPShareTokenDeleteRequest *)shareTokenDeleteRequest;
-(char)hasZoneSaveRequest;
-(CKDPZoneSaveRequest *)zoneSaveRequest;
-(char)hasZoneRetrieveRequest;
-(CKDPZoneRetrieveRequest *)zoneRetrieveRequest;
-(char)hasZoneDeleteRequest;
-(CKDPZoneDeleteRequest *)zoneDeleteRequest;
-(char)hasZoneRetrieveChangesRequest;
-(CKDPZoneRetrieveChangesRequest *)zoneRetrieveChangesRequest;
-(char)hasRecordSaveRequest;
-(CKDPRecordSaveRequest *)recordSaveRequest;
-(char)hasRecordRetrieveRequest;
-(CKDPRecordRetrieveRequest *)recordRetrieveRequest;
-(char)hasRecordRetrieveVersionsRequest;
-(CKDPRecordRetrieveVersionsRequest *)recordRetrieveVersionsRequest;
-(char)hasRecordRetrieveChangesRequest;
-(CKDPRecordRetrieveChangesRequest *)recordRetrieveChangesRequest;
-(char)hasRecordDeleteRequest;
-(CKDPRecordDeleteRequest *)recordDeleteRequest;
-(char)hasUserAvailableQuotaRequest;
-(CKDPUserAvailableQuotaRequest *)userAvailableQuotaRequest;
-(char)hasUserRetrieveRequest;
-(CKDPUserRetrieveRequest *)userRetrieveRequest;
-(char)hasQueryRetrieveRequest;
-(char)hasAssetUploadTokenRetrieveRequest;
-(CKDPAssetUploadTokenRetrieveRequest *)assetUploadTokenRetrieveRequest;
-(char)hasDeleteContainerRequest;
-(CKDPDeleteContainerRequest *)deleteContainerRequest;
-(char)hasResetContainerRequest;
-(CKDPResetContainerRequest *)resetContainerRequest;
-(char)hasPromoteContainerSchemaRequest;
-(CKDPPromoteContainerSchemaRequest *)promoteContainerSchemaRequest;
-(char)hasWebAuthTokenRetrieveRequest;
-(CKDPWebAuthTokenRetrieveRequest *)webAuthTokenRetrieveRequest;
-(char)hasPostCommentRequest;
-(CKDPPostCommentRequest *)postCommentRequest;
-(char)hasGetCommentsRequest;
-(CKDPGetCommentsRequest *)getCommentsRequest;
-(char)hasGetCommentRequest;
-(CKDPGetCommentRequest *)getCommentRequest;
-(char)hasDeleteCommentRequest;
-(CKDPDeleteCommentRequest *)deleteCommentRequest;
-(char)hasLikeRequest;
-(CKDPLikeRequest *)likeRequest;
-(char)hasUnlikeRequest;
-(CKDPUnlikeRequest *)unlikeRequest;
-(char)hasGetLikesRequest;
-(CKDPGetLikesRequest *)getLikesRequest;
-(char)hasPulseRequest;
-(CKDPPulseRequest *)pulseRequest;
-(char)hasSubscriptionCreateRequest;
-(CKDPSubscriptionCreateRequest *)subscriptionCreateRequest;
-(char)hasSubscriptionRetrieveRequest;
-(CKDPSubscriptionRetrieveRequest *)subscriptionRetrieveRequest;
-(char)hasSubscriptionDeleteRequest;
-(CKDPSubscriptionDeleteRequest *)subscriptionDeleteRequest;
-(char)hasUserQueryRequest;
-(CKDPUserQueryRequest *)userQueryRequest;
-(char)hasUserPrivacySettingsUpdateRequest;
-(CKDPUserPrivacySettingsUpdateRequest *)userPrivacySettingsUpdateRequest;
-(char)hasUserPrivacySettingsResetRequest;
-(CKDPUserPrivacySettingsResetRequest *)userPrivacySettingsResetRequest;
-(char)hasUserPrivacySettingsBatchLookupRequest;
-(CKDPUserPrivacySettingsBatchLookupRequest *)userPrivacySettingsBatchLookupRequest;
-(char)hasUserPrivacySettingsRetrieveRequest;
-(CKDPUserPrivacySettingsRetrieveRequest *)userPrivacySettingsRetrieveRequest;
-(char)hasTokenRegistrationRequest;
-(CKDPTokenRegistrationRequest *)tokenRegistrationRequest;
-(char)hasTokenUnregistrationRequest;
-(CKDPTokenUnregistrationRequest *)tokenUnregistrationRequest;
-(char)hasSetBadgeCountRequest;
-(CKDPSetBadgeCountRequest *)setBadgeCountRequest;
-(char)hasNotificationSyncRequest;
-(CKDPNotificationSyncRequest *)notificationSyncRequest;
-(char)hasNotificationMarkReadRequest;
-(CKDPNotificationMarkReadRequest *)notificationMarkReadRequest;
-(char)hasPkiRegisterRequest;
-(CKDPPkiRegisterRequest *)pkiRegisterRequest;
-(char)hasPkiRetrieveRequest;
-(CKDPPkiRetrieveRequest *)pkiRetrieveRequest;
-(char)hasMescalSessionInfoRequest;
-(CKDPMescalSessionInfoRequest *)mescalSessionInfoRequest;
-(char)hasMescalCertificateRequest;
-(CKDPMescalCertificateRequest *)mescalCertificateRequest;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasRequest;
-(void)setRequest:(CKDPOperation *)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)setHeader:(CKDPRequestOperationHeader *)arg1 ;
-(CKDPRequestOperationHeader *)header;
-(char)hasHeader;
@end
