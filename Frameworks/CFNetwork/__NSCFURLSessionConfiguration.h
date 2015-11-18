/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:22:44 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/NSURLSessionConfiguration.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSURLSessionAppleIDContext;
@class NSString, NSURL, NSData, NSURLCredentialStorage, NSURLCache, NSHTTPCookieStorage, NSDictionary, NSSet, NSArray;

@interface __NSCFURLSessionConfiguration : NSURLSessionConfiguration <NSCopying, NSSecureCoding> {

	NSString* _identifier;
	unsigned _requestCachePolicy;
	double _timeoutIntervalForRequest;
	double _timeoutIntervalForResource;
	unsigned _networkServiceType;
	char _allowsCellularAccess;
	char _discretionary;
	NSString* _sharedContainerIdentifier;
	char _sessionSendsLaunchEvents;
	id _connectionProxyDictionary;
	int _TLSMinimumSupportedProtocol;
	int _TLSMaximumSupportedProtocol;
	char _HTTPShouldUsePipelining;
	char _HTTPShouldSetCookies;
	unsigned _HTTPCookieAcceptPolicy;
	id _HTTPAdditionalHeaders;
	int _HTTPMaximumConnectionsPerHost;
	char _shouldUseExtendedBackgroundIdleMode;
	id _protocolClasses;
	char _requiresPowerPluggedIn;
	NSURL* _directoryForDownloadedFiles;
	NSString* _sourceApplicationBundleIdentifier;
	NSString* _sourceApplicationSecondaryIdentifier;
	NSData* _sourceApplicationAuditTokenData;
	unsigned _TCPAdaptiveReadTimeout;
	unsigned _TCPAdaptiveWriteTimeout;
	char _allowsExpensiveAccess;
	char _allowsPowerNapScheduling;
	char _preventsIdleSleepOnceConnected;
	char _sessionSendsLaunchOnDemandEvents;
	char _collectsTimingData;
	long long _timingDataOptions;
	char _shouldSkipPreferredClientCertificateLookup;
	NSString* _ledBellyServiceIdentifier;
	id<NSURLSessionAppleIDContext> _appleIDContext;
	NSData* _atsContext;
	double _connectionCachePurgeTimeout;
	double _connectionCacheCellPurgeTimeout;
	char _allowsRetryForBackgroundDataTasks;
	char _respectsAllowsCellularAccessForDiscretionaryTasks;
	char _overridesBackgroundSessionAutoRedirect;
	char _performsEVCertCheck;
	char _infersDiscretionaryFromOriginatingClient;
	NSString* _connectionPoolName;
	char _prefersInfraWiFi;
	char _allowsMultipathTCP;
	char _allowsResponseMonitoringDuringBodyTranmission;
	char _allowsIndefiniteConnections;
	NSString* _CTDataConnectionServiceType;
	char _allowsTCPFastOpen;
	char _allowsTLSSessionTickets;
	char _preventsDirectWiFiAccess;
	char _backgroundSession;
	NSString* _disposition;
	NSURLCredentialStorage* _phskip_credStorage;
	char _phskip_credStorageSet;
	NSURLCache* _phskip_urlCache;
	char _phskip_urlCacheSet;
	NSHTTPCookieStorage* _phskip_cookieStorage;
	char _phskip_cookieStorageSet;
	CFHSTSPolicyRef _phskip_hstsStorage;
	char _phskip_hstsStorageSet;
	int _pipeliningHighWatermark;
	int _pipeliningLowWatermark;
	int _numPriorityLevels;
	int _numFastLanes;
	int _minimumFastLanePriority;
	char _skip_download_unlink;
	char _requiresClientToOpenFiles;
	NSString* _tcpConnectionPoolName;
	char _forcesNewConnections;
	NSDictionary* _socketStreamProperties;
	char _supportsAVAssetDownloads;
	char _proxySession;
	NSSet* _authenticatorStatusCodes;
	char _disallowsSPDY;
	char _preventsIdleSleep;
	char _usePipeliningHeuristics;
	NSArray* _contentDispHeadEncFallback;
	char _shouldPreserveBackgroundSessionDisposition;
	char _disablesOutOfProcessDirectWiFiUsage;
	char _disablesUseOfProxySession;
	NSString* _companionAppBundleIdentifier;
	NSString* _watchAppBundleIdentifier;
	NSString* _watchExtensionBundleIdentifier;
	unsigned _forcedNetworkServiceType;
	NSDictionary* _overriddenDelegateOptions;

}
+(char)supportsSecureCoding;
-(HTTPConnectionCacheLimits)getConnectionCacheLimits;
-(CFHSTSPolicyRef)copyHSTSPolicy;
-(id)HTTPCookieStorage;
-(id)URLCredentialStorage;
-(id)protocolClasses;
-(id)_directoryForDownloadedFiles;
-(char)_requiresClientToOpenFiles;
-(char)skip_download_unlink;
-(char)_collectsTimingData;
-(long long)_timingDataOptions;
-(char)_isProxySession;
-(id)sharedContainerIdentifier;
-(id)_overriddenDelegateOptions;
-(char)_allowsRetryForBackgroundDataTasks;
-(char)HTTPShouldSetCookies;
-(unsigned)HTTPCookieAcceptPolicy;
-(char)_supportsAVAssetDownloads;
-(char)_overridesBackgroundSessionAutoRedirect;
-(char)isDiscretionary;
-(id)_atsContext;
-(char)isBackgroundSession;
-(void)set_supportsAVAssetDownloads:(char)arg1 ;
-(id)_appleIDContext;
-(void)set_authenticatorStatusCodes:(id)arg1 ;
-(void*)_copyAttribute:(CFStringRef)arg1 ;
-(OpaqueCFHTTPCookieStorageRef)_copyCFCookieStorage;
-(id)_ledBellyServiceIdentifier;
-(char)_disallowsSPDY;
-(char)_shouldSkipPreferredClientCertificateLookup;
-(char)_requiresPowerPluggedIn;
-(id)_socketStreamProperties;
-(char)_allowsExpensiveAccess;
-(unsigned)_TCPAdaptiveReadTimeout;
-(unsigned)_TCPAdaptiveWriteTimeout;
-(char)_allowsPowerNapScheduling;
-(id)_tcpConnectionPoolName;
-(id)_sourceApplicationBundleIdentifier;
-(id)_sourceApplicationSecondaryIdentifier;
-(id)_sourceApplicationAuditTokenData;
-(char)_preventsIdleSleepOnceConnected;
-(char)_forcesNewConnections;
-(char)shouldUseExtendedBackgroundIdleMode;
-(char)_allowsMultipathTCP;
-(char)_allowsResponseMonitoringDuringBodyTranmission;
-(char)_allowsIndefiniteConnections;
-(id)_CTDataConnectionServiceType;
-(char)_allowsTCPFastOpen;
-(char)_allowsTLSSessionTickets;
-(unsigned)_forcedNetworkServiceType;
-(void)setHTTPMaximumConnectionsPerHost:(int)arg1 ;
-(void)set_connectionCachePurgeTimeout:(double)arg1 ;
-(unsigned)requestCachePolicy;
-(double)timeoutIntervalForRequest;
-(id)_authenticatorStatusCodes;
-(void)set_shouldSkipPreferredClientCertificateLookup:(char)arg1 ;
-(id)initWithDisposition:(id)arg1 ;
-(void)setBackgroundSession:(char)arg1 ;
-(void)setSessionSendsLaunchEvents:(char)arg1 ;
-(void)set_proxySession:(char)arg1 ;
-(void)set_preventsDirectWiFiAccess:(char)arg1 ;
-(CFHSTSPolicyRef)_phskip_hstsStorage;
-(void)set_phskip_hstsStorage:(CFHSTSPolicyRef)arg1 ;
-(id)_phskip_cookieStorage;
-(void)set_phskip_cookieStorage:(id)arg1 ;
-(id)_phskip_urlCache;
-(void)set_phskip_urlCache:(id)arg1 ;
-(id)_phskip_credStorage;
-(void)set_phskip_credStorage:(id)arg1 ;
-(void)setSharedContainerIdentifier:(id)arg1 ;
-(char)sessionSendsLaunchEvents;
-(void)set_requiresPowerPluggedIn:(char)arg1 ;
-(char)_sessionSendsLaunchOnDemandEvents;
-(void)set_sessionSendsLaunchOnDemandEvents:(char)arg1 ;
-(char)_respectsAllowsCellularAccessForDiscretionaryTasks;
-(void)set_respectsAllowsCellularAccessForDiscretionaryTasks:(char)arg1 ;
-(char)_infersDiscretionaryFromOriginatingClient;
-(void)setSkip_download_unlink:(char)arg1 ;
-(void)set_requiresClientToOpenFiles:(char)arg1 ;
-(void)set_forcesNewConnections:(char)arg1 ;
-(char)_preventsIdleSleep;
-(void)set_preventsIdleSleep:(char)arg1 ;
-(char)_usePipeliningHeuristics;
-(void)set_usePipeliningHeuristics:(char)arg1 ;
-(int)TLSMinimumSupportedProtocol;
-(void)setTLSMinimumSupportedProtocol:(int)arg1 ;
-(int)TLSMaximumSupportedProtocol;
-(void)setTLSMaximumSupportedProtocol:(int)arg1 ;
-(id)connectionProxyDictionary;
-(void)setConnectionProxyDictionary:(id)arg1 ;
-(int)HTTPMaximumConnectionsPerHost;
-(void)setShouldUseExtendedBackgroundIdleMode:(char)arg1 ;
-(void)setProtocolClasses:(id)arg1 ;
-(void)set_directoryForDownloadedFiles:(id)arg1 ;
-(void)set_sourceApplicationAuditTokenData:(id)arg1 ;
-(void)set_TCPAdaptiveReadTimeout:(unsigned)arg1 ;
-(void)set_TCPAdaptiveWriteTimeout:(unsigned)arg1 ;
-(double)_connectionCachePurgeTimeout;
-(double)_connectionCacheCellPurgeTimeout;
-(id)_connectionPoolName;
-(int)pipeliningHighWatermark;
-(void)setPipeliningHighWatermark:(int)arg1 ;
-(int)pipeliningLowWatermark;
-(void)setPipeliningLowWatermark:(int)arg1 ;
-(int)numPriorityLevels;
-(void)setNumPriorityLevels:(int)arg1 ;
-(int)numFastLanes;
-(void)setNumFastLanes:(int)arg1 ;
-(int)minimumFastLanePriority;
-(void)setMinimumFastLanePriority:(int)arg1 ;
-(void)set_tcpConnectionPoolName:(id)arg1 ;
-(id)_contentDispHeadEncFallback;
-(void)set_contentDispHeadEncFallback:(id)arg1 ;
-(void)set_preventsIdleSleepOnceConnected:(char)arg1 ;
-(char)_performsEVCertCheck;
-(void)set_atsContext:(id)arg1 ;
-(char)_prefersInfraWiFi;
-(void)set_prefersInfraWiFi:(char)arg1 ;
-(char)_shouldPreserveBackgroundSessionDisposition;
-(void)set_shouldPreserveBackgroundSessionDisposition:(char)arg1 ;
-(char)_disablesOutOfProcessDirectWiFiUsage;
-(void)set_disablesOutOfProcessDirectWiFiUsage:(char)arg1 ;
-(char)_disablesUseOfProxySession;
-(void)set_disablesUseOfProxySession:(char)arg1 ;
-(void)set_CTDataConnectionServiceType:(id)arg1 ;
-(char)_preventsDirectWiFiAccess;
-(void)set_allowsMultipathTCP:(char)arg1 ;
-(void)set_allowsResponseMonitoringDuringBodyTranmission:(char)arg1 ;
-(void)set_allowsIndefiniteConnections:(char)arg1 ;
-(id)_companionAppBundleIdentifier;
-(void)set_companionAppBundleIdentifier:(id)arg1 ;
-(id)_watchAppBundleIdentifier;
-(void)set_watchAppBundleIdentifier:(id)arg1 ;
-(id)_watchExtensionBundleIdentifier;
-(void)set_watchExtensionBundleIdentifier:(id)arg1 ;
-(void)set_forcedNetworkServiceType:(unsigned)arg1 ;
-(void)set_overriddenDelegateOptions:(id)arg1 ;
-(void)setHSTSPolicy:(CFHSTSPolicyRef)arg1 ;
-(char)_phskip_credStorageSet;
-(char)_phskip_urlCacheSet;
-(char)_phskip_cookieStorageSet;
-(char)_phskip_hstsStorageSet;
-(void)set_phskip_credStorageSet:(char)arg1 ;
-(void)set_phskip_urlCacheSet:(char)arg1 ;
-(void)set_phskip_cookieStorageSet:(char)arg1 ;
-(void)set_phskip_hstsStorageSet:(char)arg1 ;
-(void)set_disallowsSPDY:(char)arg1 ;
-(void)setHTTPShouldUsePipelining:(char)arg1 ;
-(void)setRequestCachePolicy:(unsigned)arg1 ;
-(void)setURLCache:(id)arg1 ;
-(id)URLCache;
-(id)disposition;
-(double)timeoutIntervalForResource;
-(void)setTimeoutIntervalForResource:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(id)arg1 ;
-(char)allowsCellularAccess;
-(void)setURLCredentialStorage:(id)arg1 ;
-(void)setHTTPCookieStorage:(id)arg1 ;
-(void)set_allowsPowerNapScheduling:(char)arg1 ;
-(void)set_allowsExpensiveAccess:(char)arg1 ;
-(void)set_sourceApplicationBundleIdentifier:(id)arg1 ;
-(void)set_sourceApplicationSecondaryIdentifier:(id)arg1 ;
-(void)set_appleIDContext:(id)arg1 ;
-(void)setDiscretionary:(char)arg1 ;
-(void)set_infersDiscretionaryFromOriginatingClient:(char)arg1 ;
-(void)set_allowsRetryForBackgroundDataTasks:(char)arg1 ;
-(void)set_connectionPoolName:(id)arg1 ;
-(void)setTimeoutIntervalForRequest:(double)arg1 ;
-(void)set_timingDataOptions:(long long)arg1 ;
-(char)HTTPShouldUsePipelining;
-(void)setAllowsCellularAccess:(char)arg1 ;
-(void)setHTTPCookieAcceptPolicy:(unsigned)arg1 ;
-(void)setHTTPShouldSetCookies:(char)arg1 ;
-(void)setDisposition:(id)arg1 ;
-(void)set_overridesBackgroundSessionAutoRedirect:(char)arg1 ;
-(void)set_performsEVCertCheck:(char)arg1 ;
-(void)set_connectionCacheCellPurgeTimeout:(double)arg1 ;
-(void)set_allowsTCPFastOpen:(char)arg1 ;
-(void)set_allowsTLSSessionTickets:(char)arg1 ;
-(void)setHTTPAdditionalHeaders:(id)arg1 ;
-(void)set_ledBellyServiceIdentifier:(id)arg1 ;
-(void)set_socketStreamProperties:(id)arg1 ;
-(void)setNetworkServiceType:(unsigned)arg1 ;
-(void)set_collectsTimingData:(char)arg1 ;
-(id)HTTPAdditionalHeaders;
-(unsigned)networkServiceType;
@end

