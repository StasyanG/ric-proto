export interface SMPP {
  Send(request: SMPPSendRequest): Promise<SMPPSendResponse>;
  Status(request: SMPPStatusRequest): Promise<SMPPStatusResponse>;
  GatewayInfo(request: SMPPGatewayInfoRequest): Promise<SMPPGatewayInfoResponse>;
}

export interface SMTP {
  Send(request: SMTPSendRequest): Promise<SMTPSendResponse>;
  GatewayInfo(request: SMTPGatewayInfoRequest): Promise<SMTPGatewayInfoResponse>;
}

export interface UserContext {
  groupId?: string;
  userId?: string;
  spanId?: string;
}

export interface SMPPSendRequest {
  ctx?: UserContext;
  gatewayId?: string;
  phone?: string;
  message?: string;
}

export interface SMPPSendResponse {
  messageId?: string;
}

export interface SMPPStatusRequest {
  gatewayId?: string;
  messageId?: string;
}

export interface SMPPStatusResponse {
  state?: any;
  description?: string;
  smppStatus?: SMPPStatus;
}

export interface SMPPStatus {
  msgId?: string;
  msgState?: string;
  finalDate?: string;
  errCode?: number;
}

export interface SMPPGatewayInfoRequest {
  gatewayId?: string;
}

export interface SMPPGatewayInfoResponse {
  online?: boolean;
  uptime?: number;
}

export interface SMTPCredentials {
  to?: string[];
  sender?: string;
  subject?: string;
  contentType?: string;
  body?: string;
  server?: string;
  password?: string;
  useTls?: boolean;
}

export interface SMTPSendRequest {
  ctx?: UserContext;
  gatewayId?: string;
  request?: SMTPCredentials;
}

export interface SMTPSendResponse {

}

export interface SMTPGatewayInfoRequest {
  gatewayId?: string;
}

export interface SMTPGatewayInfoResponse {
  info?: SMTPCredentials;
}